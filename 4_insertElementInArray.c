/*
                program: 4
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
    printf("Enter the size of the array you want to create : ");
    scanf("%d", &size);
    arr = (int *)calloc(size, sizeof(int));
    printf("Enter the %d element: ", size + 1);
    for (i = 0; i < size - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Element is present in the array\n");
    printArray(arr, size - 1);

    printf("Enter the location where you want to insert an element: ");
    scanf("%d", &position);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    addArray(arr, size, position, value);
    printArray(arr, size);

    return 0;
}

void addArray(int arr[], int size, int position, int value)
{
    int i = size - 2;
    while (i >= position)
    {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = arr[i];
    arr[i] = value;
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
    Enter the size of Array: 5
    Enter the 4 element: 2 3 4 5
    Element is present in the array2 3 4 5
    Enter the location where you want to insert an element: 4
    Enter the value to insert: 2
    2 3 4 2 5
*/