/*
                    program: 2
    write a c program To read n numbers and display it, to demonstrate the
    concept of ane dimensional array finding.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    int *arr;
    printf("Enter the element you want to store in the array: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter the %d element.\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Element is present in the array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

/*
    Output:
    Enter the element you want to store in the array: 9
    Enter the 9 element.
    9 8 7 6 5 4 3 2 1
    Element is present in the array
    9 8 7 6 5 4 3 2 1

*/