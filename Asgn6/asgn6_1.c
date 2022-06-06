#include <stdio.h>

int main()
{
    int i, n;
    printf("How many Numbers would you like to input?\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Printing those values");
    for (i = 0; i < n; i++)
        printf("element %d: %d\n",i+1, a[i]);

    return 0;
}
