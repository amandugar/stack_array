#include <stdio.h>
#define MAXSIZE 5
 
struct stack{
    int stk[MAXSIZE];
    int top;
};

struct stack s;
 
void push(void);
void pop(void);
void display(void);
void search(void);

void main ()
{
    int choice;
    int option = 1;
    s.top = -1;
 
    printf ("STACK OPERATION\n");
    while (option)
    {
        printf ("------------------------------------------\n");
        printf ("      1    -->    PUSH               \n");
        printf ("      2    -->    POP               \n");
        printf ("      3    -->    DISPLAY               \n");
        printf ("      4    -->    SEARCH               \n");
        printf ("      5    -->    EXIT           \n");
        printf ("------------------------------------------\n");
 
        printf ("Enter your choice\n");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            search();
            break;
        case 5:
            return;
        }
        fflush (stdin);
        printf ("Do you want to continue(Type 0 or 1)?\n");
        scanf    ("%d", &option);
    }
}

void push(){
    int num;
    if (s.top ==(MAXSIZE-1)){
        printf("Stack is Full\n");
        return;
    } else {
        printf("Enter the value to be entered\n");
        scanf("%d",&num);
        s.top++;
        s.stk[s.top] = num;
    }
    return;
}

void pop(){
    int num;
    if(s.top == -1){
        printf("stack is Empty\n");
        return;
    } else {
        num = s.stk[s.top];
        printf("Element popped out is %d\n",num);
        s.top--;
    }
}
 
void display(){
    int i;
    if(s.top == -1){
        printf("Stack is Empty");
        return;
    } else {
        printf("The values in the stack are : \n");
        for(i=s.top;i>=0;i--){
            printf("%d\n",s.stk[i]);
        }
    }
}

void search(){
    int i,num;
    printf("Enter the element to be searched");
    scanf("%d",&num);
    if(s.top == -1){
        printf("Stack is Empty");
        return;
    } else {
        for(i=s.top;i>=0;i--){
            if(s.stk[i]==num){
                printf("Element found at %d",MAXSIZE-i);
                return;
            }
        }
        printf("Element not found");
    }
}
