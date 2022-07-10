/*
Q2. Implement a program to perform addition of two matrices.
*/

#include <stdio.h>
int main()
{
    int i,j,a[3][3], b[3][3], c[3][3];
    printf("Enter the elements of 1st Array: \n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%3d", &a[i][j]);
    printf("\n");
    printf("Enter the elements of 2nd Array: \n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%3d", &b[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];

    // The sum of 2 matrices is
    printf("The sum of 2 matrices is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%3d", c[i][j]);
        printf("\n");
    }
    return 0;
}
