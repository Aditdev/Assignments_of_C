#include <stdio.h>

int find_gcd(int a, int b)
{
    int gcd, i;
    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    return gcd;
}

int main()
{
    int a, b, gcd;
    printf("Enter 2 Numbers:\n");
    scanf("%d%d", &a, &b);
    gcd = find_gcd(a, b);
    printf("G.C.D of %d & %d is %d", a, b, gcd);
    return 0;
}