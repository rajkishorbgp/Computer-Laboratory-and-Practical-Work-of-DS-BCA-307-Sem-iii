/*
                @program : 12
    Write a program to Calculate factorial of a number using recursive function.
*/
#include <stdio.h>

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("factorial: %d", factorial(n));
    return 0;
}

/*
    Output:
    Enter the number: 6
    factorial: 720
*/