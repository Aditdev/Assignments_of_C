#include <stdio.h>
int sum_arr(int a[], int);
int main()
{
    int n, i, adn;
    float avg;
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
    adn = sum_arr(a, n);
    avg = adn / n;
    printf("\nAVG is %f", avg);
    return 0;
}
int sum_arr(int a[], int n)
{
    int i, addn = 0;
    for (i = 0; i < n; i++)
        addn += a[i];
    return addn;
}