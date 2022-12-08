/*
                @program: 4
    Write a C program To insert an element in an array
*/

#include <stdio.h>
#include <stdlib.h>

void addArray(int *, int, int, int);
void printArray(int *, int);

int main()
{
    int size, *arr, i;
    int position, value;
    printf("How many elements do you want to put in the array: ");
    scanf("%d", &size);
    arr = (int *)calloc(size + 1, sizeof(int));
    printf("Enter the %d element: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Element is present in the array\n");
    printArray(arr, size);

    printf("Enter the location where you want to insert an element: ");
    scanf("%d", &position);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    addArray(arr, size + 1, position, value);
    printArray(arr, size + 1);

    return 0;
}

void addArray(int arr[], int size, int position, int value)
{
    int i;
    for (i = size - 1; i >= position; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position] = value;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*
    Output:
    How many elements do you want to put in the array: 6
    Enter the 6 element: 1 2 3 4 5 6
    Element is present in the array
    1 2 3 4 5 6
    Enter the location where you want to insert an element: 2
    Enter the value to insert: 10
    1 2 10 3 4 5 6
*/