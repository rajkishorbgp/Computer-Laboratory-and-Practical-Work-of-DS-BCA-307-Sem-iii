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