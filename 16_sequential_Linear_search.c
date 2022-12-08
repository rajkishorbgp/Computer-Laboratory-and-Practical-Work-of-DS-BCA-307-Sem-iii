/*
                    @program: 16
    Write a program to Search an element using sequential search.
*/

#include <stdio.h>

int linSearch(int arr[], int size, int key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

void main()
{
    int i, arr[100], size, key, pos;
    printf("How many elements do you want to put in the array: ");
    scanf("%d", &size);
    printf("Enter the %d element: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key(do you want to search): ");
    scanf("%d", &key);
    pos = linSearch(arr, size, key);
    if (pos != -1)
    {
        printf("%d is a present in %d position.", key, pos);
    }
    else
    {
        printf("%d is not found.", key);
    }
}

/*
   Output:
   How many elements do you want to put in the array: 8
   Enter the 8 element: 1 8 5 3 2 4 5 6
   Enter the key(do you want to search): 3
   3 is a present in 3 position.
*/