#include <stdio.h>

int main()
{
    int j, i, n, k = 0;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            k++;
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}