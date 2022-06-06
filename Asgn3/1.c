#include <stdio.h>

int factorial(int x)
{
    if (x == 0)
        return 1;
    return (factorial(x - 1) * x);
}

int main()
{
    int k, fact;
    printf("Enter a number\n");
    scanf("%d", &k);
    fact = factorial(k);
    return 0;
}