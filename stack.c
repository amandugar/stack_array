#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
void push(int);
void pop();
void display();
struct stack_DT
{
  int a[size];
  int top;
};
typedef struct stack_DT stack;
stack st;
void main(){
int n,n1;
char ch;
st.top=-1;
do
{
printf("entre your choice");
printf("1.push\n 2.pop\n 3.display\n 4.exit");
scanf("%d",&n);
switch(n)
{
case 1:printf("entre the element which you want to insert in stack");
       scanf("%d",&n1);
       push(n1);
       break;
case 2:pop();
       break;
case 3:display();
       break;
       default: exit(0);
}
printf("do you want to continue y/n");
scanf("%s",&ch);
}while(ch=='y'||ch=='Y');
}

void push(int b)
 {
 if(st.top==size-1)
   {
     printf("stack is over flow");
   }
   else
   {
     st.top++;
     st.a[st.top]=b;
     printf("element succesfully inserted");
   }
 }
void pop()
 {
   int temp;
   if(st.top==-1)
   {
     printf("stack is underflow");
   }
   else
   {
     temp=st.a[st.top];
     st.top--;
     printf("%d element succesfully deleted from stack",temp);
   }
 }
 void display()
 {
   int x;
   x=st.top;
   if(st.top==-1)
   {
     printf("stack is under flow");
   }
   else
   for(x=4;x>=0;x--)
   {
     printf("%d",st.a[x]);
   }
 }
