#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 10
int queue[size];
int rear=0,front=0;
int mian()
{    char ch;
    int choice1,choice2,value;
    printf("    type of double ended queue   \n");
    do{
    printf("1.input restricted deque\n2.output restricted deque\n");
    printf("enter your choice of queue type: ");
    scanf("%d",&choice1);
    switch(choice1){
    case 1:
        printf("\n select the operation\n");
        printf("1.insert\n2.delete from rear\n3.delete from front\n4.display\n");
        do{
            printf("enter your choice for the operation in input-restricted deque: ");
            scanf("%d",&choice2);
            switch(choice2)
            {
            case 1:
                enqueuerear();
                display();
                break;
            case 2:
                value=dequeue();
                printf("the value deleted is %d ",value);
                display();
                break;
            case 3:
                value=dequeuefront();
                printf("the value deleted is %d",value);
                display();
                break;
            case 4:
                display();
                break;
            default:
                printf("wrong choice");
                break;
            }
            printf("\n do you want to perform another operation(y/n): ");
            scanf("%c", &ch);
        }
        while(ch=='y'||ch=='Y');
        break;
    case 2:
        printf("\n select the operation \n");
        printf("1.insert at rear\n2.insert at front\n3.delete\n4.display\n");
        do
        {
            printf("enter your choice for the operation\n");
            scanf("%d",&choice2);
            switch (choice2)
            {case 1:
                enqueuerear();
                display();
                break;
            case 2:
                enqueuefront();
                display();
                break;
            case 3:
                value=dequeuefront();
                printf("the value deleted is %d",value);
                display();
                break;
            case 4:
                display();
                break;
            default:
                printf("wrong choice");
                break;
            }printf("\n do you want to perform another operation(y/n): ");
            scanf("%c", &ch);
        } while(ch=='y'||ch=='Y');
        break;
        }
        printf("\n do you want to perform another operation y/n:");
        scanf("%c",&ch);
        }while(ch=='y'||ch=='Y');
}
void enqueuerear()
{

    int value;
    char ch;
    if(front==size/2)
    {
        printf("queue is full\n");
        return;
    }
    do{
        printf("enter the value to be inserted:");
        scanf("%d",&value);
        queue[front]=value;
        front++;
        printf("do you want to continue insertion y/n:");
        ch=getch();}
        while(ch=='y'||ch=='Y');
    }
void enqueuefront()
{

    int value;
    char ch;
    if(front==size/2)
    {
      printf("queue is full\n");
      return;
    }
    do{
        printf("enter the value to be inserted:");
        scanf("%d",&value);
        rear--;
        queue[rear]=value;
        printf("do you want to continue insertion y/n:");
        ch=getch();}
       while(ch=='y'||ch=='Y');
    }
int dequeuerear()
{
    int deleted;
    if(front==rear){
        printf("queue is empty\n");
        return 0;
    }
    front--;
    deleted=queue[front];
    return deleted;
}
int dequeuefront()
{
    int deleted;
    if(front==rear){
        printf("queue is empty\n");
        return 0;
    }
   deleted=queue[rear];
   rear++;
   return deleted
}
void display()
{
    int i;
    if(front==rear)
    {
        printf("queue is empty\n");

    }
    else{
        printf("the queue elements are:");
        for(i=rear;i<front;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
}







