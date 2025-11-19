#include <stdio.h>
#include <stdlib.h>

struct Employee{
int id;
char name[50];
float salary;
};
int main()
{
struct Employee *ptr;
int N;
float sum=0;
printf("Enter the number of employees:");
scanf("%d",&N);
ptr=(struct Employee *)malloc(N*sizeof(struct Employee));
printf("\nSize of structure Employee:%d bytes\n",(int)sizeof(struct Employee));//even if we dont mention (int) we will still get the same op but the purpose of 
//mentioning it is to avoid errors that occur when the size is too large.sizeof(struct emo) gives us the unsigned value so to have a signed value we will mention
// (int)
if(ptr==NULL){
    printf("memory allocation failed!");
    return 1;
}
for(int i=0;i<N;i++)
{
printf("\nEnter the id,name and salary of the employee:\n");
scanf("%d%s%f",&ptr[i].id,ptr[i].name,&ptr[i].salary);
printf("Name:%s\nID:%d\nSalary:%f",(ptr+i)->name,(ptr+i)->id,(ptr+i)->salary);
}

for(int i=0;i<N;i++)
{
sum+=(ptr+i)->salary;
}
printf("\nthe sum of the salaries of all the employees is %f",sum);
free(ptr);
return 0;
}
