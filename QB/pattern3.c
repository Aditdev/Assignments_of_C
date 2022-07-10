/***
 * Write a program to display the following for the user specified number of lines.
     *
    **
   ***
  ****
 *****
****** 
*/
#include <stdio.h>

int main()
{
    int i, j, n, k;
    printf("Howmany Rows?\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (k = n - i - 2; k >= 0; k--)
            printf(" ");
        for (j = 0; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}