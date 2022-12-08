#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define size 5
struct queue
{
    int que[size];
    int front, rear;
} Q;

int queueFull()
{
    if (Q.rear >= size - 1)
        return 1;
    else
        return 0;
}

int queueEmpty()
{
    if ((Q.front == -1) || (Q.front > Q.rear))
        return 1;
    else
        return 0;
}

int insert_item(int item)
{
    if (Q.front == -1)
        Q.front++;
    Q.que[++Q.rear] = item;
    return Q.rear;
}

int delete_item()
{
    int item;
    item = Q.que[Q.front];
    Q.front++;
    printf("\n The delete_itemd item is %d", item);
    return Q.front;
}

void display()
{
    int i;
    for (i = Q.front; i <= Q.rear; i++)
        printf("   %d", Q.que[i]);
}
void main(void)
{
    int ch, item;

    Q.front = -1;
    Q.rear = -1;

    printf("\n Queue Implementation");
    do
    {
        printf("\n\n Main Menu");
        printf("\n 1 : Insert");
        printf("\n 2 : Delete");
        printf("\n 3 : Display");
        printf("\n 4 : Exit");

        printf("\n Select Operation : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            if (queueFull())
            {
                printf("\n Cannot insert the element");
            }

            else
            {
                printf("\n Enter the number to be inserted : ");
                scanf("%d", &item);
                insert_item(item);
            }
            break;

        case 2:
            if (queueEmpty())
            {
                printf("\n Queue is Empty");
            }
            else
            {
                delete_item();
            }
            break;

        case 3:
            if (queueEmpty())
            {
                printf("\nQueue Is Empty");
            }
            else
            {
                display();
            }
            break;

        case 4:
            printf("\n End of Program...");
        }

    } while (ch != 4);
}