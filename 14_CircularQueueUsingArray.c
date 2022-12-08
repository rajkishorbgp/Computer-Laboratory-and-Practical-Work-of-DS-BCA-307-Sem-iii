/*
                @program: 14
    Write a c program to implementation of circular queue using array.
*/

#include <stdio.h>
#define size 8

struct Queue
{
    int que[size];
    int front, rear;
} Q;

int isEmpty()
{
    return Q.rear == -1;
}

int isFull()
{
    return (Q.rear + 1) % size == Q.front;
}

void add(int data)
{
    if (isFull())
    {
        printf("\nQueue is Full.");
        return;
    }
    if (Q.front == -1)
    {
        Q.front = 0;
    }
    Q.rear = (Q.rear + 1) % size;
    Q.que[Q.rear] = data;
}

int peek()
{
    return Q.que[Q.front];
}

int delet()
{
    if (isEmpty())
    {
        printf("\nQueue is Empty.");
        return -1;
    }
    int data = Q.que[Q.front];
    if (Q.front == Q.rear)
    {
        Q.front = Q.rear = -1;
    }
    Q.front = (Q.front + 1) % size;
    return data;
}

void main()
{
    Q.front = -1;
    Q.rear = -1;
    add(1);
    add(2);
    add(3);
    add(4);
    while (!isEmpty())
    {
        printf("%d\n", peek());
        delet();
    }
}

/*
   Output:
   1
   2
   3
   4
*/