/*
                @program: 7
    Write a c program To multiply two matrix A and B.
*/

#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], i, j, k, sum;
    printf("Enter the element of 3X3 matrix A:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the element of 3X3 matrix B :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("multiply of two matrix A and B: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = 0;
            for (k = 0; k < 3; k++)
            {
                sum = sum + (a[i][k] * b[k][j]);
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
    return 0;
}

/*
    Output:
    Enter the element of 3X3 matrix A :
    2 2 2
    3 3 3
    4 4 4

    Enter the element of 3X3 matrix B :
    2 2 2
    3 3 3
    4 4 4

    multiply of two matrix A and B:
    18 18 18
    27 27 27
    36 36 36

*/