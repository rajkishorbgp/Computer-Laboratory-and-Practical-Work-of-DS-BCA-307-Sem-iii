/*
                @Program: 10
    Write a c program to implementation of linked list using array.
*/

#include <stdio.h>
#include <stdlib.h>
#define size 5
int arr[size];
int indx = 0;
struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void addFirst()
{
    struct Node *nextNode = (struct Node *)malloc(sizeof(struct Node));
    nextNode->data = arr[indx++];
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
    if (head == NULL)
    {
        printf("\nLinked List is a Empty.\n");
        return;
    }
    struct Node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void main()
{
    int ch;
    do
    {
        printf("\n1. addFarst.");
        printf("\n2. print LInked List.");
        printf("\n3. Exit.\n");

        printf("\nSelect Operation : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
        {
            if (size == indx)
            {
                printf("\nLinked List is full...\n");
            }
            else
            {
                printf("Enter the data: ");
                scanf("%d", &arr[indx]);
                addFirst();
            }
        }
        break;

        case 2:
        {
            printLL();
        }
        break;
        case 3:
            break;

        default:
            printf("\ninvalid input...\n");
            break;
        }
    } while (ch != 3);
}

/*
Output:

1. addFarst.
2. print LInked List.
3. Exit.

Select Operation : 1
Enter the data: 5

1. addFarst.
2. print LInked List.
3. Exit.

Select Operation : 1
Enter the data: 6

1. addFarst.
2. print LInked List.
3. Exit.

Select Operation : 1
Enter the data: 7

1. addFarst.
2. print LInked List.
3. Exit.

Select Operation : 1
Enter the data: 8

1. addFarst.
2. print LInked List.
3. Exit.

Select Operation : 1
Enter the data: 9

1. addFarst.
2. print LInked List.
3. Exit.

Select Operation : 1

Linked List is full...

1. addFarst.
2. print LInked List.
3. Exit.

Select Operation : 5

invalid input...

1. addFarst.
2. print LInked List.
3. Exit.

Select Operation : 2
9 8 7 6 5
1. addFarst.
2. print LInked List.
3. Exit.

Select Operation : 3

*/