/*
                @program: 17
    Write a program to Search an element using binary search.
*/

#include <stdio.h>

int binarySearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int key, size, index;
    int array[] = {2, 4, 6, 8, 10, 12, 14};
    key = 12;
    size = sizeof(array) / sizeof(int);
    index = binarySearch(array, size, key);

    if (index != -1)
    {
        printf("Element %d is %d position", key, index);
    }
    else
    {
        printf("Element %d is not found!.", key);
    }
}

/*
   Output:
   Element 12 is 5 position
*/