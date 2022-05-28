#include <stdio.h>

int factorial(int x)
{
    if (x == 0)
        return 1;
    return (factorial(x - 1) * x);
}

int main()
{
        int k = factorial(2);
        printf("%d ", k);
    return 0;
}