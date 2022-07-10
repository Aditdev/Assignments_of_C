#include <stdio.h>

int main()
{
    int n, i, flag = 0;
    printf("Which number has to be checked?\n");
    scanf("%d", &n);
    if (n == 1)
        printf("The Number 1 is neither prime nor composite");
    else
    {
        for (i = 3; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                printf("The Number %d is not prime", n);
                break;
            }
        }
        if (flag == 0)
            printf("The number %d is prime", n);
    }
    return 0;
}