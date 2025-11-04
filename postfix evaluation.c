#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define size 100
int compute(char op,int op1,int op2);
void evaluate(char exp[]);
int main()
{ char exp[size];
  printf("enter the postfix expression: ");
  scanf("%s",exp);
  evaluate(exp);
  return 0;
  }
  void evaluate(char exp[])
  {int res=0;
  int stack[size];
  int top=-1;
   for(int i=0;i<strlen(exp);i++)
   {
     if(isdigit(exp[i]))
     { stack[++top]=exp[i]-'0';
     }
     else
     { int op2=stack[top--];
       int op1=stack[top--];
       int res= compute(exp[i],op1,op2);
       stack[++top]=res;
       }
       }
       printf("result= %d\n",stack[top]);
       }
 int compute(char op,int op1,int op2)
 {
   switch(op)
   { case'+': return op1+op2;
    break;
     case'-':return op1-op2;
     break;
     case'*': return op1*op2;
      break;
      case '/':return op1/op2;
      break;
      default:printf("invalid operator:%c\n",op);
      return 0;
    }
    }
