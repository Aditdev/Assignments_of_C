/*
Q6. Implement a program to find transpose of a matrix.
*/

#include <stdio.h>
int main()
{
    int i,j,a[3][3], c[3][3];
    printf("Enter the elements of 1st Array: \n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%3d", &a[i][j]);
    printf("\n");

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            c[i][j] = a[j][i];

    // The Transpose of matrix A is
    printf("The Transpose of matrix A is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%3d", c[i][j]);
        printf("\n");
    }
    return 0;
}
