/*
                @program: 17
    Write a program to Search an element using sequential search.
*/

#include <stdio.h>

int BinarySearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int i, size, key, loc;
    int arr[] = {4, 5, 2, 3, 5, 8, 6, 3, 1, 12, 13, 64, 10, 11};

    size = sizeof(arr) / sizeof(int);

    key = 1;
    loc = linerSearch(arr, size, key);

    if (loc != -1)
    {
        printf("%d element is in %dth position.", key, loc);
    }
    else
    {
        printf("%d is not found", key);
    }
}

/*
   Output:
   1 element is in 8th position.
*/