#include<stdio.h>
#include<stdlib.h>
struct NODE {
    int info;
    struct NODE *next;
}; typedef struct NODE* NODE;
NODE insertfront(NODE);
NODE insertrear(NODE);
NODE insertatpos(NODE , int);
NODE insertafter(NODE , int);

NODE head=NULL;

NODE insertfront(NODE head){
  NODE temp =NULL;
  temp=(NODE)malloc(sizeof(struct NODE));
  if(temp==NULL)
  {
    printf("insufficient memory");
    return head;
 }
    printf("enter element to be inserted\n");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(head==NULL)
      head=temp;
    else{
       temp->next=head;
       head=temp;}

    return head;

}
NODE insertrear(NODE head)
{
    NODE temp=NULL,cur=NULL;
    temp=(NODE)malloc(sizeof(struct NODE));
    if(temp==NULL)
  {
    printf("insufficient memory");
    return head;
 }
    printf("enter element to be inserted\n");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(head==NULL)
      head=temp;
    else{
         cur=head;
         while(cur->next!=NULL)
         {
             cur=cur->next;
         }
         cur->next=temp;
         }
     return head;

      }
NODE insertatpos(NODE head, int pos)
{
   NODE temp=NULL;
    temp=(NODE)malloc(sizeof(struct NODE));
    if(temp==NULL)
    {
        printf("memory is not allocated");
        return head;
    }
    int ele;
    printf("enter the data");
    scanf("%d",&ele);
    temp->info=ele;
    int i=1;
    NODE cur=head;
    for(i=1;i<pos-1&&cur!=NULL;i++){
        cur=cur->next;
    }
    if(cur == NULL) {
    printf("Invalid position\n");
    free(temp);
    return head;
    }
    temp->next=cur->next;
    cur->next=temp;
    printf("insertion successful\n");
    return head;
}
NODE insertafter(NODE head,int data)
{
   NODE temp=NULL;
    temp=(NODE)malloc(sizeof(struct NODE));
    if(temp==NULL)
    {
        printf("memory is not allocated");
        return head;
    }
    int ele;
    printf("enter the data to be inserted\n");
    scanf("%d",&ele);
    temp->info=ele;
    NODE cur=head;
    while(cur!=NULL&& cur->info!=data){
        cur=cur->next;
    }
    if(cur==NULL)
    {
        printf("element not found");
    }
    else{
        temp->next=cur->next;
        cur->next=temp;
    }
    printf("insertion successful\n");
    return head;
}
void display(NODE head)
{
    if(head==NULL){
        printf("the list is empty\n");
        return;
    }
    else{
    NODE temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->info);
        temp=temp->next;
    }
    printf("null\n");}
}
int main()
{   int choice;
    int pos;
    int data;
    printf("1.insert at front\n2.insert at rear\n3.insert at position\n4.insert after element\n5.display\n6.exit\n");
    while(1){
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:head=insertfront(head);
           break;
    case 2:head=insertrear(head);
           break;
    case 3:printf("enter the position\n");
           scanf("%d",&pos);
           head=insertatpos(head,pos);
           break;
    case 4:printf("enter the data after which the element has to be inserted\n");
           scanf("%d",&data);
           head=insertafter(head ,data);
           break;
    case 5:display(head);
           break;
    case 6:exit(0);
    default:printf("invalid choice\n");
            break;
    }}

}

