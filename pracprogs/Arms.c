#include <stdio.h>
#include <math.h>
int main()
{
    int n, summ = 0, i = 0, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int Num = n;

//  To find the number of digits in a number
    do
    {
        Num = Num / 10;
        count++;
    } while (Num != 0);
    int digit, j = n;

//  To find the sum of each number raised to the total number of digits
    do
    {
        digit = j % 10;
        summ += pow(digit, count);
        j /= 10;
    } while (j!=0);

    
    if (summ == n)
        printf("The Number %d is an Armstrong Number", n);
    else
        printf("The Number %d is not an Armstrong Number", n);
    return 0;
}