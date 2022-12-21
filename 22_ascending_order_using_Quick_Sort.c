/*
                        @Program: 22
    Write a program to arrange the list of numbers in ascending order using Quick Sort.
*/

#include <stdio.h>

void quickSort(int *, int, int);
int partition(int *, int, int);

int main()
{
    int i, size;
    int arr[] = {7, 8, 9, 6, 5, 4, 3, 2, 1, 0, 3, 7, 3, 0};
    size = sizeof(arr) / sizeof(int);
    quickSort(arr, 0, size - 1);
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void quickSort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    // last element
    int pIdx = partition(arr, si, ei);
    quickSort(arr, si, pIdx - 1); // left
    quickSort(arr, pIdx + 1, ei); // right
}

int partition(int arr[], int si, int ei)
{
    int pivot = arr[ei];
    int i = si - 1; // to make place for els smaller than pivot

    for (int j = si; j < ei; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            // swap
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    i++;
    int temp = arr[ei];
    arr[ei] = arr[i];
    arr[i] = temp;
    return i;
}

/*
 *   Output:
 *   0 0 1 2 3 3 3 4 5 6 7 7 8 9
 */