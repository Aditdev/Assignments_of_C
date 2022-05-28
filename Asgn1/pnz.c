#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    if (n > 0)
        printf("Entered Number %d is Positive",n);
    else if (n < 0)
        printf("Entered Number %d is negative",n);
    else
        printf("The Number is zero");
    return 0;
}