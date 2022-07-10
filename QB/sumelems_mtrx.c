/*
Q20. Write a Program to calculate and display sum of all the elements of the matrix.
*/

#include <stdio.h>
int main()
{
    int i, j, a[3][3], sum = 0;
    printf("Enter the elements of 1st Array: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%3d", &a[i][j]);
            sum += a[i][j];
        }
    }
    printf("The sum of all elements of matrix is %d", sum);
    return 0;
}
