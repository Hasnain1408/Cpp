#include<stdio.h>
#include <stdlib.h>

#define max 10

struct stack
{
    int item[max];
    int top;
};

typedef struct stack st;

void createEmptyStack(st* s)
{
    s -> top = -1;
}

int isFull(st* s)
{
    if(s -> top == max - 1)
        return 1;
    else
        return 0;
}


int isEmpty(st* s)
{
    if(s -> top == -1)
        return 1;
    else
        return 0;
}

void push(st* s, int newitem)
{
    if(isFull(s))
        printf("Stack is Full ! \n");
    else
    {
        s -> top++;
        s ->item[s ->top] = newitem;

    }
}

int pop(st* s)
{
   if(isEmpty(s))
        printf("Stack is Empty Already ! \n");
    else
    {
        printf("%d poped successfully.\n",s ->item[s ->top]);
        s -> top--;

    }
}


int main()
{
    st* s1 = (st*)malloc(sizeof(st));
    st* s2 = (st*)malloc(sizeof(st));

    createEmptyStack(s1);
    createEmptyStack(s2);

    char str[20];
    printf("Input : ");
    gets(str);

    int result;
    for(int i =0; str[i]; i++)
    {
        if(str[i] == '+' || str[i] == '-'|| str[i] == '*' || str[i] == '/' || str[i] == ')'){
            push(s2,(int)str[i]);
        }
        else if(str[i] == ")")
        {
            int ch = pop(s2);
            int a,b;
            b = pop(s1);
            a = pop(s1);

            switch(ch)
            {
            case '+':
                result = a + b;
                push(s1,result);
                continue;
            case '-':
                result = a - b;
                push(s1,result);
                continue;
            case '*':
                result = a * b;
                push(s1,result);
                continue;
            case '/':
                result = a / b;
                push(s1,result);
                continue;

            }
        }
        else{
            push(s1,(int)str[i]);
        }
    }

    printf("%d\n",result);



    return 0;
}

