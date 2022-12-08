/*
                @program: 1
    Write a c program To display fibonacci series up to a range.
*/

#include <stdio.h>
int main()
{
    int n, a, b, c, i;
    a = 0;
    b = 1;
    c = 0;
    printf("Enter the range of fibonacci series: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", c);
        c = a + b;
        b = a;
        a = c;
    }
    return 0;
}

/*
    Output:
    Enter the range of fibonacci series: 20
    0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181
*/