#include <stdio.h>

#define size 5

/* stack structure*/
struct stack
{
    int s[size];
    int top;
} st;

int stackFull()
{
    if (st.top >= size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int stackEmpty()
{
    if (st.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int peek()
{
    if (stackEmpty())
    {
        printf("Stack is Empty (Underflow).");
    }
    else
    {
        return st.s[st.top];
    }
}

void push(int item)
{
    st.top++;
    st.s[st.top] = item;
}

int pop()
{
    int item;
    item = st.s[st.top];
    st.top--;
    return (item);
}

void display()
{
    int i;
    if (stackEmpty())
    {
        printf("\n Stack Is Empty!");
    }
    else
    {
        printf("\nElements of Stack : ");
        for (i = st.top; i >= 0; i--)
        {
            printf(" %d", st.s[i]);
        }
    }
}

/*------Main Function-----*/

void main()
{
    int item, ch;

    st.top = -1;

    printf("\n Stack Implementation");
    do
    {
        printf("\n\n Main Menu");
        printf("\n 1 : push");
        printf("\n 2 : pop");
        printf("\n 3 : peek");
        printf("\n 4 : display");
        printf("\n 5 : exit");

        printf("\n Select Operation : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\n Enter the item to be pushed : ");
            scanf("%d", &item);

            if (stackFull())
            {
                printf("\n Stack is Full (Overflow)");
            }
            else
            {
                push(item);
            }
            break;

        case 2:
            if (stackEmpty())
            {
                printf("\n Stack is Empty (Underflow)");
            }
            else
            {
                item = pop();
                printf("\n The popped element is %d", item);
            }
            break;
        case 3:

            item = peek();
            printf("\n The peek element is %d", item);
            break;
        case 4:
            display();
            break;
        case 5:
            printf("End of Program...");
        }
    } while (ch != 5);
}

/*

Output:

Stack Implementation

 Main Menu
 1 : push
 2 : pop
 3 : peek
 4 : display
 5 : exit
 Select Operation : 1

 Enter the item to be pushed : 5


 Main Menu
 1 : push
 2 : pop
 3 : peek
 4 : display
 5 : exit
 Select Operation : 1

 Enter the item to be pushed : 4


 Main Menu
 1 : push
 2 : pop
 3 : peek
 4 : display
 5 : exit
 Select Operation : 1

 Enter the item to be pushed : 3


 Main Menu
 1 : push
 2 : pop
 3 : peek
 4 : display
 5 : exit
 Select Operation : 1

 Enter the item to be pushed : 2


 Main Menu
 1 : push
 2 : pop
 3 : peek
 4 : display
 5 : exit
 Select Operation : 1

 Enter the item to be pushed : 1


 Main Menu
 1 : push
 2 : pop
 3 : peek
 4 : display
 5 : exit
 Select Operation : 1

 Enter the item to be pushed : 0

 Stack is Full (Overflow)

 Main Menu
 1 : push
 2 : pop
 3 : peek
 4 : display
 5 : exit
 Select Operation : 3

 The peek element is 1

 Main Menu
 1 : push
 2 : pop
 3 : peek
 4 : display
 5 : exit
 Select Operation : 3

 The peek element is 1

 Main Menu
 1 : push
 2 : pop
 3 : peek
 4 : display
 5 : exit
 Select Operation : 4

Elements of Stack :  1 2 3 4 5

 Main Menu
 1 : push
 2 : pop
 3 : peek
 4 : display
 5 : exit
 Select Operation : 2

 The popped element is 1

 Main Menu
 1 : push
 2 : pop
 3 : peek
 4 : display
 5 : exit
 Select Operation : 2

 The popped element is 2

 Main Menu
 1 : push
 2 : pop
 3 : peek
 4 : display
 5 : exit
 Select Operation : 2

 The popped element is 3

 Main Menu
 1 : push
 2 : pop
 3 : peek
 4 : display
 5 : exit
 Select Operation : 2

 The popped element is 4

 Main Menu
 1 : push
 2 : pop
 3 : peek
 4 : display
 5 : exit
 Select Operation : 2

 The popped element is 5

 Main Menu
 1 : push
 2 : pop
 3 : peek
 4 : display
 5 : exit
 Select Operation : 2

 Stack is Empty (Underflow)

 Main Menu
 1 : push
 2 : pop
 3 : peek
 4 : display
 5 : exit
 Select Operation : 5
End of Program...

*/