#include <stdio.h>

int main()
{
    int a, b, c, max;
    printf("Enter 3 numbers:\n");
    scanf("%d%d%d", &a, &b, &c);
    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    printf("The Maximum of the numbers %d,%d and %d is %d", a, b, c, max);
    return 0;
}
