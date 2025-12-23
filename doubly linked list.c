#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *lptr;
struct node *rptr;
};

struct node* insert_at_front(struct node *head,int data)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->lptr=NULL;
    newnode->rptr=NULL;
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    newnode->rptr=head;
    head->lptr=newnode;
    head=newnode;
    newnode->lptr=NULL;
    return head;
 }

 struct node* insert_at_rear(struct node *head,int data)
 {
     struct node *newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=data;
     newnode->lptr=NULL;
     newnode->rptr=NULL;
     if(head==NULL)
     {
        head=newnode;
        return head;
     }
     struct node *temp=head;
     while(temp->rptr!=NULL){
            temp=temp->rptr;
     }
     temp->rptr=newnode;
     newnode->lptr=temp;
     return head;
 }

 struct node* delete_front(struct node *head){
  if(head==NULL){
    printf("delete not possible no elements present\n");
    return head;
  }
  struct node *temp;
  temp=head;
  head=head->rptr;
  if(head!=NULL){
    head->lptr=NULL;
  }
  printf("the deleted element is %d\n",temp->data);
  free(temp);
  return head;
  }

 struct node* delete_rear(struct node *head)
 {
   if(head==NULL){
    printf("delete not possible no elements present\n");
    return head;
   }
   if(head->rptr==NULL){
    printf("the deleted element is %d\n",head->data);
    free(head);
    return NULL;
   }
   struct node *temp=head;
   struct node *del;
   while(temp->rptr!=NULL){
    temp=temp->rptr;
   }
   del=temp;
   printf("the deleted element is %d\n",del->data);
   temp->lptr->rptr=NULL;
   free(del);
   return head;
 }

 void display(struct node *head)
 {
     if(head==NULL)
     {
         printf("no elements present\n");
         return;
     }
    struct node *temp=head;
    printf("the elements of the doubly linked list\n");
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->rptr;
 }}

void main(){
 int choice,item;
 struct node *head=NULL;
 printf("1.insert at front\n2.insert at rear\n3.delete at front\n4.delete at rear\n5.display\n6.exit\n");
 while(1){
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice){
    case 1: printf("enter element\n");
    scanf("%d",&item);
    head=insert_at_front(head,item);
    break;
    case 2:printf("enter element\n");
    scanf("%d",&item);
    head=insert_at_rear(head,item);
    break;
    case 3:head=delete_front(head);
    break;
    case 4:head=delete_rear(head);
    break;
    case 5:display(head);
    break;
    case 6: exit(1);
    default:printf("invalid choice\n");
    break;
 }}
}

