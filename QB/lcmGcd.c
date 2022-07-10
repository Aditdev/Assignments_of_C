/*
Q7. Write a C program to find LCM of two numbers using recursion.
Q38.Write a C program to find GCD of two numbers using recursion.
*/
#include <stdio.h>
int gcd(int n1, int n2)
{
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}

int main()
{
    int a, b, k;
    printf("which are the 2 numbers:\n");
    scanf("%d%d", &a, &b);
    k = gcd(a, b);
    printf("G.C.D is %d\nL.C.M is %d", k, (a * b) / k);
    return 0;
}