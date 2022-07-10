/*
Q28. Write a program to accept a set of 10 numbers and print the numbers using arrays. Find the average of these integers.
*/

#include <stdio.h>
int main()
{
    int i, a[10], sum = 0;
    float avg;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("The Entered array is:\n");
    for (i = 0; i < 10; i++)
        printf("%d", a[i]);
    avg = (float)sum/10;
    printf("The Avg of all elements is %.1f",avg);
    return 0;
}