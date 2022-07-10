/*
Q28. Write a program to accept a set of 10 numbers and print the numbers using arrays. Find the average of these integers.
*/

#include <stdio.h>
int main()
{
    int i, a[10];
    float avg, sum = 0.0;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum += (float)a[i];
    }
    printf("The Entered array is:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    avg = sum / 10.0;
    printf("\nThe Avg of all elements is %.1f", avg);
    return 0;
}