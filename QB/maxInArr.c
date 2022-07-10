/*
Q19. Write a program to find largest element of an 1D array.
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Your Array contains howmany elements?\n");
    scanf("%d", &n);
    int a[n], i, max;
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max = a[0];
    for (i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    printf("Largest element of Array is:%d\t", max);
    return 0;
}