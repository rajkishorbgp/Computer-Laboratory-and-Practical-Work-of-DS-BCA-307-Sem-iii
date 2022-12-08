/*
            program: 8;
    Write a C program To Concatenate two string.
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[60], str2[30];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    printf("Concatenate two string: ");
    strcat(str1, str2);
    puts(str1);

    return 0;
}

/*
    Output:
    Enter the first string: Raj
    Enter the second string: Kishor
    Concatenate two string: RajKishor
*/