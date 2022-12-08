#include <stdio.h>
#include <stdlib.h>
#define size 10
int arr[size];

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void addFirst(int data)
{

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

int main()
{
    int data;
    printf("Enter the data you want to push LinkedList: ");
    scanf("%d", &data);

    return 0;
}