/*
                @program: 13
    Write a c program to implementation of queue using array.
*/

#include <stdio.h>

#define size 5
struct Queue
{
    int que[size];
    int front, rear;
} Q;

int isEmpty()
{
    return Q.rear == -1;
}

void add(int data)
{
    if (Q.rear == size - 1)
    {
        printf("\nQueue is full.\n");
        return;
    }

    if (Q.front == -1)
    {
        Q.front = 0;
    }
    Q.que[++Q.rear] = data;
}
int peek()
{
    if (isEmpty())
    {
        printf("Queue is Empty.");
        return -1;
    }
    return Q.que[Q.front];
}

int delete()
{
    int data, i;
    if (Q.rear == -1)
    {
        printf("\nQueue is Empty.\n");
        return -1;
    }
    data = Q.que[Q.front];
    if (Q.rear == 0)
    {
        Q.rear = Q.front = -1;
        return data;
    }
    for (i = Q.front + 1; i <= Q.rear; i++)
    {
        Q.que[i - 1] = Q.que[i];
    }
    Q.rear--;
    return data;
}

void main()
{
    Q.front = -1;
    Q.rear = -1;

    add(3);
    add(4);
    add(5);
    add(6);
    add(7);
    while (!isEmpty())
    {
        printf("%d ", peek());
        delete ();
    }
}
/*
    Output
    3 4 5 6 7
*/