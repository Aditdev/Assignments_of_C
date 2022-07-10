/*
Q26. Write a program in C to find the smallest of N elements using an array.
*/
#include <stdio.h>

int main()
{
    int i, min, n;
    printf("Howmany Numbers:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    min = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    printf("Smallest element of Array is: %d", min);

    return 0;
}