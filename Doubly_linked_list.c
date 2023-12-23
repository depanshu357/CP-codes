#include <stdio.h>
#include <stdlib.h>
struct stud
{
    int data;
    struct stud *next;
    struct stud *prev;
};
typedef struct stud node;
node *create_doubly_linked_list()
{
    int t;
    scanf("%d", &t);
    node *head, *curr=head, *pre=head;
    for (int i = 0; i < t; i++)
    {
        if (i == 0)
        {
            head = (node *)malloc(sizeof(node));
            curr = head;
            curr->prev = NULL;
            pre =head;
        }
        else
        {
            curr->next = (node *)malloc(sizeof(node));
            curr->prev = pre;
            pre = curr;
            curr = curr->next;
        }
        scanf("%d",&curr->data);
            // printf("ok ");
    }
    curr->next=NULL;
    return head;
}
void print_linked_list(node *head){
    node *p=head;
    while(p!=NULL){
        printf("%d ",p->data);
        // printf("working ");
        p=p->next;
    }
}
node *insert_in_doubly_linked_list(node *head){
    printf("insert before which data? ");
    int test;
    scanf("%d",&test);
    printf("%d\n",test);
    printf("what data to insert? ");
    node *ins=(node *)malloc(sizeof(node)) ;
    scanf("%d",&ins->data);
    printf("%d\n",ins->data);
    
    node *pre,*curr;
    curr=head;
    if(head->data==test){
        head->prev=ins;
        ins->next=head;
        ins->prev=NULL;
        return ins;
    }
    while(curr!=NULL){
        pre=curr;
        curr=curr->next;
        if(curr->data=test){
           ins->next=pre->next;
           pre->next=ins;
           ins->prev=curr->prev;
           curr->prev=ins;
           break;
        }
    }
    return head;
}
node *deletion_in_a_doubly_linked_list(node *head){
    printf("Which data to delete? ");
    int data;
    scanf("%d",&data);
    printf("%d\n",data);

    node *curr=head,*pre=head;
    if(head->data==data){
        head=head->next;
        free(curr);
        return head;
    }
    while(curr->next!=NULL){
        pre=curr;
        curr=curr->next;
        if(curr->data==data){
            pre->next=curr->next;
            if(curr->next!=NULL)
            curr->next->prev=pre;
            free(curr);
            break;
        }
    }
    return head;
}
int main()
{
    node *head = create_doubly_linked_list();
    // head= insert_in_doubly_linked_list(head);
    head= deletion_in_a_doubly_linked_list(head);
    print_linked_list(head);
}