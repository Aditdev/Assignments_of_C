/*

Q39.Write a C program to implement month name by accepting month number from user.(Use switch case)

*/
#include <stdio.h>
void monthNum(int);
int main()
{
    int n;
    printf("Enter a Number:\n");
    scanf("%d", &n);
    monthNum(n);
    return 0;
}

void monthNum(int m)
{

    switch (m)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    default:
        printf("Invalid Number");
        break;
    }
}