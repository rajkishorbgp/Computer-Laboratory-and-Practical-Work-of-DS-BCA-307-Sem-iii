#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

bool isEmpty()
{
    return head == NULL;
}

void addFirst(int data)
{
    struct Node *nextNode = malloc(sizeof(struct Node));
    nextNode->data = data;
    if (head == NULL)
    {
        head = tail = nextNode;
        nextNode->next = NULL;
        return;
    }
    nextNode->next = head;
    head = nextNode;
}

void printLL()
{
    struct Node *temp;
    if (isEmpty())
    {
        printf("LinkedList is Empty");
        return;
    }
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    addFirst(5);
    addFirst(6);
    addFirst(7);
    addFirst(8);
    addFirst(9);
    addFirst(10);
    addFirst(11);
    addFirst(12);
    addFirst(13);
    printLL();
    return 0;
}