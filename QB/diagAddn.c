/*
Q35. Write a program that will accept two-dimensional square matrix and find the sum of diagonal elements. (Note- sum of diagonal elements should be calculated for both sides).
*/

#include <stdio.h>

int main()
{
    int n, i, j, sum = 0, k;
    printf("Enter the length of one side of matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter a %d x %d matrix:\n", n, n);
    int k = n - 1;
    for (i = 0; i < n; i++)
        {for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
}
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
                sum += a[i][j];
            if (i == k - j)
                sum += a[i][j];
        }
    }
    printf("The sum is %d", sum);
    return 0;
}