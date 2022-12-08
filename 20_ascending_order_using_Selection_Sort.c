/*
                            @program: 20
    Write a program to arrange the list of numbers in ascending order using Selection Sort.
*/

#include <stdio.h>

void selectionSort(int arr[], int size)
{
    int i, temp, curr, minpos, j;

    for (i = 0; i < size; i++)
    {
        minpos = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[minpos] > arr[j])
            {
                minpos = j;
            }
        }
        temp = arr[minpos];
        arr[minpos] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int i, size;
    int arr[] = {7, 8, 9, 6, 5, 4, 3, 2, 1, 0, 3, 7, 3};
    size = sizeof(arr) / sizeof(int);
    selectionSort(arr, size);
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