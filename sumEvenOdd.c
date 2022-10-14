/*

    Write a c program to read 8 integer in an array and sum all even and odd number.
*/

#include <stdio.h>
void main()
{
    int arr[8], i, even, odd;
    even = 0;
    odd = 0;
    printf("Enter the 8 integer number: ");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Element is present in the array\n");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
        if (arr[i] % 2 == 0)
        {
            even += arr[i];
        }
        else
        {
            odd += arr[i];
        }
    }
    printf("\nSum of all Even number: %d", even);
    printf("\nSum of all Odd number: %d", odd);
}

/*
    Output:
    Enter the 8 integer number: 2 3 7 6 5 3 4 8
    Element is present in the array
    2 3 7 6 5 3 4 8
    Sum of all Even number: 20
    Sum of all Odd number: 18

*/