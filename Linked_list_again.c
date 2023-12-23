#include <stdio.h>
#include<stdlib.h>
struct stud
{
    int x;
    struct stud *next;
};
typedef struct stud node;

node *create_linked_list()
{
    int t;
    scanf("%d",&t);
    node *p, *head;
    for (int i = 0; i < t; i++)
    {
        if (i == 0)
        {
            head = (node*)malloc(sizeof(node));
            p = head;
        }
        else
        {
            p->next = (node*)malloc(sizeof(node));
            p= p->next;
        }
        scanf("%d", &p->x);
    }
    p->next = NULL;
    return head;
}
void print_linked_list(node *head)
{
    node *p = head;
    while (p != NULL)
    {
        printf("%d ", p->x);
        p = p->next;
    }
}
node* inserting_an_element(node *head,int num){
    printf("Insert before which no?\n");
    int no;
    scanf("%d",&no);
    node *p=head, *q=head,*ins;
    ins = (node *)malloc(sizeof(node));
    if(p->x==no){
        ins->x=num;
        ins->next=head;
        head=ins;
    }
    else{

    while(p!=NULL){
         q=p;
         p=p->next;     

         if((p->x)==no){
            ins->x=num;
            ins->next=p;
            q->next=ins;
            break;
         }
    }
    }
    return head;
}
node *deleting_an_element(node *head){
    printf("Which element to delete?\n");
    int ele;
    scanf("%d",&ele);
    node *p=head,*q=head;
    if(head->x==ele){
        head=head->next;
        free(p);
    }else{
        
    while(p!=NULL){
        q=p;
        p=p->next;
        if((p->x)==ele){
            q->next=p->next;
            free(p);
            break;
        }
    }
    }
    return head;
}
node *reverse_linked_list(node *head){
    node *pre=NULL,*curr=head,*next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=pre;
        pre=curr;
        curr=next;
    }
    return pre;
}
int main()
{
    node *head = create_linked_list();
    // head =inserting_an_element(head,2);
    // head =deleting_an_element(head);
    head =reverse_linked_list(head);
    print_linked_list(head);

}