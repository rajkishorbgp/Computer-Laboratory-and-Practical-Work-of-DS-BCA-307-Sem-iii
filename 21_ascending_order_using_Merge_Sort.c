/*
                            Program: 21
    Write a program to arrange the list of numbers in ascending order using Merge Sort.
*/

#include <stdio.h>

void mergeSort(int[], int, int);
void merge(int[], int, int, int);
void printArray(int[], int);

int main()
{
    int arr[] = {3, 5, 2, 7, 2, 1, 5, 6, 3, 1, 2};
    int size = sizeof(arr) / sizeof(int);
    mergeSort(arr, 0, size - 1);
    printArray(arr, size);

    return 0;
}

void mergeSort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = si + (ei - si) / 2; // (si+ei)/2
    mergeSort(arr, si, mid);      // left part
    mergeSort(arr, mid + 1, ei);  // right part
    merge(arr, si, mid, ei);
}

void merge(int arr[], int si, int mid, int ei)
{
    int temp[ei - si + 1];
    int i = si;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= ei)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i++];
        }
        else
        {
            temp[k] = arr[j++];
        }
        k++;
    }
    // left part
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    // right part
    while (j <= ei)
    {
        temp[k++] = arr[j++];
    }

    int size = sizeof(temp) / sizeof(int);
    // copy temp to original array
    for (i = si, k = 0; k < size; k++, i++)
    {
        arr[i] = temp[k];
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

/*
    Output:
    1 1 2 2 2 3 3 5 5 6 7
*/