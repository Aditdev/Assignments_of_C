/*
Q27. Write a program in C to find the reverse of a given string without using inbuilt string function.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int i, len;
    char temp;
    char str[100];
    printf("Input the string to be reversed:\n");
    gets(str);
    len = strlen(str);
    printf("Original String:\n%s", str);
    for (i = 0; i < len/2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("\nReversed String:\n%s", str);
    return 0;
}