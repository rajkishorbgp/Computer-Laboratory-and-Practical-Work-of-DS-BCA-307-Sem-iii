/*
                @program: 11
    Write a c program to implementation of stack using array.
*/

#include <stdio.h>
#define size 5

struct stack
{
    int s[size];
    int top;
} st;

int isEmpty()
{
    return st.top == -1;
}

int pop()
{
    if (isEmpty())
    {
        printf("stack is Empty");
        return -1;
    }
    int data;
    data = st.s[st.top--];
    return data;
}

void push(int data)
{
    if (st.top == size - 1)
    {
        printf("\nStack is Full...\n");
        return;
    }
    else
    {
        st.s[++st.top] = data;
    }
}

int peek()
{
    if (isEmpty())
    {
        printf("stack is Empty");
        return -1;
    }
    return st.s[st.top];
}

int main()
{
    st.top = -1;

    push(1);
    push(2);
    push(3);
    push(4);

    while (!isEmpty())
    {
        printf("%d ", peek());
        pop();
    }
}

/*
    Output:
    4 3 2 1
*/