/*
Q31. Explain the term recursion. Write a program to find summation of n numbers using recursion.
*/
#include <stdio.h>

int summation(int);

int main()
{
    int sum,n;
    printf("Upto which number do you want sum of numbers:\n");
    scanf("%d",&n);
    sum = summation(n);
    printf("The sum of first %d Natural Numbers is %d",n,sum);
    return 0;
}
int summation(int x)
{
    if (x == 1)
        return 1;
    return x+summation(x-1);
}