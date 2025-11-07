#include<stdio.h>
#include<stdlib.h>
# define n 5
void push(int ele);
void pop();
void display();
int cq[n];
int front=-1,rear=-1;
int isempty(){
if(front==-1)
{
   return 1;
}
else
{
   return 0;
}
}
int isfull()
{
  if(rear==n-1)
    {
        return 1;

}
  else{
    return 0;
    }
}
void push(int ele)
{ if(isfull())
{
  printf("the queue is full\n");
}
else if(isempty())
{
  front=0;
  rear=0;
  cq[rear]=ele;
}
else
{
 rear=(rear+1)%n;
 cq[rear]=ele;
 }
 }
void pop(){
  if(isempty()){
   printf( "underflow\n");
   }
   else if (rear==front){
    rear=-1;
    front=-1;
    }
    else{
     printf("the deleted element is %d\n",cq[front]);
     front=(front+1)%n;
     }
}
void display()
{
if(isempty())
{
  printf("no elements present in the queue\n");
}
else
{
 printf("the elements are\n");
 int i;
 for(i=front;i!=rear;i=(i+1)%n)
 {
     printf("%d ",cq[i]);
 }
printf("%d\n",cq[i]);
}
}

void main()
{int ele;
 int ch;
 printf("menu\n1.push\n2.pop\n3.display\n4.exit\n");
 while(1){
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter the element\n");
                   scanf("%d",&ele);
                   push(ele);
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
            case 4:exit(0);
            default:printf("invalid input\n");
        }
        }
}

