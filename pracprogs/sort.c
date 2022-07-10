#include <stdio.h>
int main()
{
    int n, i, j, temp;
    printf("Enter the number of integers you are going to enter:\n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Array is :\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j + 1] < a[j])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nSorted Array is :\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    
    return 0;
}
