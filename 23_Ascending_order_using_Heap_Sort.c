/*
                @ program: 23
    Write a program to arrange the list of numbers in Ascending order using Heap Sort.
*/

#include <stdio.h>
void heapSort(int[], int);
void heapify(int[], int, int);

void main()
{
    int arr[] = {7, 6, 5, 4, 3, 2, 1};

    int size = sizeof(arr) / sizeof(int);
    heapSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void heapSort(int arr[], int size)
{
    int n = size;
    for (int i = n / 2; i >= 0; i--)
    {
        heapify(arr, i, n);
    }
    for (int i = n - 1; i > 0; i--)
    {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, 0, i);
    }
}

void heapify(int arr[], int i, int size)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int maxIdx = i;

    if (left < size && arr[left] > arr[maxIdx])
    {
        maxIdx = left;
    }

    if (right < size && arr[right] > arr[maxIdx])
    {
        maxIdx = right;
    }

    if (maxIdx != i)
    {
        int temp = arr[i];
        arr[i] = arr[maxIdx];
        arr[maxIdx] = temp;
        heapify(arr, maxIdx, size);
    }
}

/*
    Output:
    1 2 3 4 5 6 7
*/