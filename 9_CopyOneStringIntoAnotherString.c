/*
                @program: 9
    Write a C program To copy a string into another string.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[60], str2[60];
    printf("Enter the string: ");
    gets(str1);
    strcpy(str2, str1);
    printf("Copy a string.\n");
    puts(str2);

    return 0;
}

/*
    Enter the string: rajkishor
    Copy a string.
    rajkishor
*/