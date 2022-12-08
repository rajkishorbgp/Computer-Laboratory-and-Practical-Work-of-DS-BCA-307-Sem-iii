/*
                        @program: 18
    Write a program to arrange the list of numbers in ascending order using Bubble Sort.
*/

#include <stdio.h>

void BubbleSort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int i, size;
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 10, 1};
    size = sizeof(arr) / sizeof(int);

    BubbleSort(arr, size);

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
/*
    Output:
    0 1 1 2 3 4 5 6 7 8 9 10
*/