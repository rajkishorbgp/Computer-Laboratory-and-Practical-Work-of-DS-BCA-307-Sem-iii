/*
                            @program: 19
    Write a program to arrange the list of numbers in ascending order using Insertion Sort.
*/

#include <stdio.h>

void insertionSort(int arr[], int size)
{
    int i, curr, prev;
    for (i = 1; i < size; i++)
    {
        curr = arr[i];
        prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}
int main()
{
    int i, size;
    int arr[] = {7, 8, 9, 6, 5, 4, 3, 2, 1, 0, 3, 7, 3};
    size = sizeof(arr) / sizeof(int);
    insertionSort(arr, size);
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
    Output:
    0 1 2 3 3 3 4 5 6 7 7 8 9
*/