/*
Q40. Write a C program to accept 10 integers from the user and arrange them in ascending order and display them.
*/

#include <stdio.h>
int main()
{
    int i, j, temp, a[10], sum = 0;
    float avg;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("The Entered array is:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");

    // Bubble Sort;
    for (i = 0; i < 10; i++)
        for (j = 0; j < 9 - i; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    printf("Sorted array is:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    return 0;
}