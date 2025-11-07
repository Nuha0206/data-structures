#include<stdio.h>
#define max 10
int dq[max];
int left=-1,right=-1;
void insert_right();
void insert_left();
void delete_right();
void delete_left();
void display();

int main(){
 int ch;
 printf("\n1.insert at right\n2.insert at left\n3.delete at right\n4.delete at left\n5.display\m6.exit\n");
 while(1){
    printf("enter your choice\n");
    scanf("%d",ch);
    switch(ch){
    case 1:insert_right();
           break;
    case 2:insert_left();
           break;
    case 3: delete_right();
            break;
    case 4:delete_left();
           break;
    case 5: display();
           break;
    case 6:exit(0);
    case default:printf("invalid choice");
                 break;
    }
    return 0;
 }
 void insert_right(){
  int val;
  printf("enter the value\n");
  scanf("%d",&val);
  if((left==0)&&(right==max-1))
    {
        printf("overflow\n");
    }
  if(left==-1){
    left=0;
    right=0;}
  else{
    if(right==max-1){
        right=0;
    else{
        right=right+1;}
    }
  }
  dq[right]=val;
  }
void insert_left(){
int val;
printf("enter the value\n");
scanf("%d",&val);
if((left==0)&&(right==max-1)
   {
        printf("overflow\n");
    }
    if(left==-1){
        left=0;right=0;
    }
    else{
        if(left==0)
            left=max-1;
        else
            left=left-1;
    }
    dq[left]=val;
    }




