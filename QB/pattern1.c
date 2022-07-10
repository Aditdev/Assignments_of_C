/*
Write a program to print the following pattern. 
A
B B
C C C
D D D D
*/

#include <stdio.h>

int main()
{
    int i, j,n;
    char ch = 'A';
    printf("Howmany Rows?\n");
    scanf("%d",&n);
    if(n<=26)
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
            printf("%c ", ch);
        ch++;
        printf("\n");
    }
    else
    printf("Invalid input");
    return 0;
}