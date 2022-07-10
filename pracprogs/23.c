#include <stdio.h>

int square(int n)
{
    return n * n;
}
int main()
{
    int k;
    printf("Give me a number I will give its square");
    scanf("%d", &k);
    int n = k;
    k = square(k);
    printf("The square of %d is %d", n, k);

    return 0;
}