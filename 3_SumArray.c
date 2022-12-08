/*
            @program: 3
    Write a c program to sum of all elements in array.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr, i, n, sum = 0;
    printf("How many element you want to sum : ");
    scanf("%d", &n);
    arr = (int *)calloc(n, sizeof(int));
    printf("Enter the %d element in array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Element is present in the array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        sum = sum + arr[i];
    }
    printf("\nSum of all elements: %d", sum);

    return 0;
}

/*
    Output:
    How many element you want to sum : 5
    Enter the 5 element in array: 4 3 2 1 6
    Element is present in the array
    4 3 2 1 6
    Sum of all elements :16

*/