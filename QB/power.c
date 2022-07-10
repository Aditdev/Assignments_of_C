/*
Q25. Write a program in C to find out the power of x raised to n (xn), using non-recursive function.
*/
#include <stdio.h>
int raisedTo(int, int);
int main()
{
    int n, x;
    printf("Which number\n");
    scanf("%d", &x);
    printf("Raised To?\n");
    scanf("%d", &n);
    printf("%d^%d = %d", x, n, raisedTo(x,n));
    return 0;
}
int raisedTo(int x, int n)
{
    int power=1;
    for (int i = 0; i < n; i++)
        power *= x;
    return power;
}