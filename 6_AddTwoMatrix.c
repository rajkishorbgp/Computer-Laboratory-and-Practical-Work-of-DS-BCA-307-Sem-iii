/*
            program: 6
     Write a c program To add two matrix A and B.
*/

#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], i, j;
    printf("Enter the element of 3X3 matrix A : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the element of 3X3 matrix B :");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nAdd of two matrix A and B. \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
    output:
    Enter the element of 3X3 matrix A :
    2 3 5
    5 3 2
    4 5 3

    Enter the element of 3X3 matrix B :
    2 4 7
    5 3 2
    7 8 9

    Add of two matrix A and B:
    4 7 12
    10 6 4
    11 13 12
*/