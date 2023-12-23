#include<stdio.h>
#include<stdlib.h>
struct stud
{
    char name[25];
    int age;
    struct stud *next;
};
typedef struct stud node ;
node *create_list(){
    int n;
    scanf("%d",&n);
    node *p,*head;
    for(int i=0;i<n;i++){
        if(i==0){
            head = (node*)malloc(sizeof(node));
            p=head;
        }else{
            p->next=(node*)malloc(sizeof(node));
            p=p->next;
        }
            scanf("%s %d",(p->name),&p->age);
    }
    p->next=NULL;
    return head;
}
int length_linked_list (node *p){
    int count=0;
    while(p!=NULL){
        count++;
    // printf("%s %d\n",p->name,p->age);
    p=p->next;
    }
    return count;
}
void find_element(node *p,int c){
    while(p!=NULL){
        if(c==p->age){printf("YES\n");return;}
        p=p->next;
    }
    printf("NO\n");
    return;
}
int main(){
    node *p =  create_list();

    //notice that p does after the fuction is processed
     
    //to find length of a linked list
    printf("%d\n",length_linked_list( p));
    
    //To find if a element 'c' is present in linked list
    int c = 80;
    find_element(p,c);
    
    // To print elements of linked list
    while(p!=NULL){
    printf("%s %d\n",p->name,p->age);
    p=p->next;
    }
    
}