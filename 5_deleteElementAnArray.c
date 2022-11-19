/*
                    program: 5
    Write a C program To delete an element from an array.
*/

#include <stdio.h>
void printArray(int *, int);
void deleteArray(int *, int, int);
int main()
{
    int size, arr[100], i;
    int position, value;
    printf("How many elements do you want to put in the array: ");
    scanf("%d", &size);
    printf("Enter the %d element: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Element is present in the array\n");
    printArray(arr, size);

    printf("Enter the location where you want to delete an element: ");
    scanf("%d", &position);

    deleteArray(arr, size - 1, position);
    printArray(arr, size - 1);

    return 0;
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

void deleteArray(int arr[], int size, int position)
{
    int i;
    for (i = position - 1; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}

/*
    Output:
    How many elements do you want to put in the array: 6
    Enter the 6 element: 1 2 3 4 5 6
    Element is present in the array
    1 2 3 4 5 6
    Enter the location where you want to delete an element: 0
    2 3 4 5 6
*/