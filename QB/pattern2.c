/***
 * Write a program to print the following pattern. (Note- Not only 4 lines, it should print N lines taken from the user.)
     A
    B B
   C C C
  D D D D

*/

#include <stdio.h>

int main()
{
    int i, j, n, k;
    char ch = 'A';
    printf("Howmany Rows?\n");
    scanf("%d", &n);
    // if (n <= 26)
        for (i = 0; i < n; i++)
        {
            for (k = n - i - 2; k >= 0; k--)
                printf(" ");
            for (j = 0; j <= i; j++)
                printf("%c ", ch);
            ch++;
            printf("\n");
        }
    // else
    //     printf("Invalid input");
    return 0;
}