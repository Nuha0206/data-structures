#include<stdio.h>
#define size 10
void push(int item);
void pop();
void display();
int stack[size],top=-1;
void main()
{
    int value,choice;
    while(1)
    {
        printf("\nMENU\n");
        printf("1.push\n2.pop\n3.display\n4.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("enter an element to be added\n");
                   scanf("%d",&value);
                   push(value);
                   break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            default:printf("invalid choice");
            break;
        }
    }
}
void push(int item)
{
    if(top==size-1)
    {
        printf("stack is full\n");
    }
    else
    {
        top++;
        stack[top]=item;

    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }else{
    int i=stack[top];
    top--;
    return i;}
}
void display()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }else
    {
        printf("the elements are\n");
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}

