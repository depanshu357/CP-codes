#include <stdio.h>
#include <stdlib.h>
struct stud
{
    char c;
    int n;
    struct stud *next;
};
typedef struct stud node;
int InsideStackPriority(char c)
{
    if (c == '-' || c == '+')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    if (c == '^')
        return 3;
    if (c == '(')
        return 0;
    if (c == '#')
        return -1;
}
int OutsideStackPriority(char c)
{
    if (c == '-' || c == '+')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    if (c == '^')
        return 4;
    if (c == '(')
        return 5;
    if (c == '#')
        return -1;
}
node *Push(node *root, char c, int n)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->n = n;
    temp->c = c;
    temp->next = NULL;
    if (root == NULL)
        root = temp;
    else
    {
        temp->next = root;
        root = temp;
    }
    // printf("pushed%d ",n);
    return root;
}
char PopO(node *head)
{
    if (head == NULL)
        return '$';
    node *temp = head;
    head = head->next;
    char c = temp->c;
    free(temp);
    return c;
}
char PopN(node *head)
{
    if (head == NULL)
    {
        return -1;
    }
    node *temp = head;
    head = head->next;
    int num = temp->n;
    free(temp);
    return num;
}
node *Pop(node *head)
{
    if (head == NULL)
    {
        // printf("It is NULL");
        return NULL;
    }
    node *temp = head;
    head = head->next;
    free(temp);
    return head;
}
char TopO(node *root)
{
    if (root == NULL)
    {
        return '#';
    }
    return root->c;
}
int TopN(node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    return root->n;
}
int Calculate(int x, int y, char operator)
{
    if (operator== '*')
        return x * y;
    if (operator== '/')
        return x / y;
    if (operator== '+')
        return x + y;
    if (operator== '-')
        return x - y;
    if (operator== '^')
    {
        int res = 1;
        while (y--)
        {
            res = res * x;
        }
        return res;
    }
}
node *Evaluate(char o, node *headN)
{
    int a = TopN(headN);
    headN = Pop(headN);
    int b = TopN(headN);
    headN = Pop(headN);
    headN = Push(headN, '#', Calculate(b, a, o));
    // printf("%d %d ",b,a);
    // printf("%d-calci ",Calculate(b, a, o));
    return headN;
}
void PrintO(node *head)
{
    while (head != NULL)
    {
        // printf("%c ", head->c);
        head = head->next;
    }
    return;
}
void PrintN(node *head)
{
    while (head != NULL)
    {
        // printf("%d ", head->n);
        head = head->next;
    }
    return;
}
int main()
{
    int n;
    scanf("%d\n", &n);
    node *Ostack;
    node *Nstack;
    Ostack = NULL;
    Nstack = NULL;
    int token;
    // Ostack = Push(Ostack, '#', 0);
    while (n)
    {
        char token;
        scanf("%c", &token);
        n--;
        int d = 10;
        int num = 0;
        while ('0' <= token && token <= '9')
        {
            num = num * d + (token - '0');
            if (n == 0)
                break;
            scanf("%c", &token);
            n--;
            // printf("%d-n ", n);
        }
        if(num>0){Nstack = Push(Nstack, '#', num);
        // printf("%d-num ",num);
        }

        if (token == ')')
        {
            // printf("activated-%c ",TopO(Ostack) );
            while (TopO(Ostack) != '(')
            {
                Nstack = Evaluate(Ostack->c, Nstack);
                Ostack = Pop(Ostack);
                // printf("y%d ",Nstack->n);
            }
            Ostack = Pop(Ostack);
        }
        else
        {
            // if (InsideStackPriority(TopO(Ostack)) >= OutsideStackPriority(token))
            //     printf("Yes ");
            // else
            //     printf("NO ");
            while (InsideStackPriority(TopO(Ostack)) >= OutsideStackPriority(token))
            {
                Nstack = Evaluate(Ostack->c, Nstack);
                Ostack = Pop(Ostack);
                // printf("Working ");
            }
            if (n != 0)
                Ostack = Push(Ostack, token, 0);
        }
    }
    // printf("\n");
    // PrintO(Ostack);
    // printf("\n");
    // PrintN(Nstack);
    while(Ostack!=NULL)
    {Nstack = Evaluate(Ostack->c, Nstack);
    Ostack = Pop(Ostack);}
    printf("\n%d ",Nstack->n);
    // if (Nstack == NULL)
    //     printf("It is NULL");
    // else
    //     printf("%d ", Nstack->n);
    // printf("%c-k ", TopO(Ostack));
}
