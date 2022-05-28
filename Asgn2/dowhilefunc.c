// To find if a number is an Armstrong number or not
#include <stdio.h>
#include <math.h>
int main()
{
    int n, summ = 0, i = 0, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int Num = n, j = n, digit;

    //  To find the number of digits in a number
    do
    {
        Num /= 10;
        count++;
    } while (Num != 0);

    //  To find the sum of each number raised to the total number of digits
    do
    {
        digit = j % 10;
        summ += pow(digit, count);
        j /= 10;
        i++;
    } while (i < count);

    if (summ == n) 
        printf("The Number %d is an Armstrong Number", n);
    else
        printf("The Number %d is not an Armstrong Number", n);
    return 0;
}