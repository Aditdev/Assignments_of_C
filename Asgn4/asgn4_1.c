#include <stdio.h>

int main()
{
    int i, j, n, max, max2;
    int arr[10];
    printf("Enter the elements of a 1d array\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

//  Bubble Sort algo for sorting array in descending order  
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10 - i - 1; j++)
        {
            if (arr[j + 1] > arr[j])
            {
                n = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = n;
            }
        }
    }
    
    printf("%d is the largest and %d is the second largest", arr[0], arr[1]);
    return 0;
}