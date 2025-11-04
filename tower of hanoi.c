#include<stdio.h>
void towerofhanoi(int n, char src,char helper,char dest);
void main()
{
 int n;
 printf("enter number of disks\n");
 scanf("%d",&n);
 printf("The sequence of moves involved are:\n");
 towerofhanoi(n,'s','h','d');
}
void towerofhanoi(int n,char src,char helper,char dest)
{ if(n==1){
    printf("\n move disk 1 from %c to %c\n",src,dest);
    return;}
  towerofhanoi(n-1,src,dest,helper);
  printf("\n move disk %d from %c to %c",n,src,dest);
  towerofhanoi(n-1,helper,src,dest);
}


