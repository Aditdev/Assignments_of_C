#include <stdio.h>

// Structure for complex numbers
struct complex
{
    int rp;
    int ip;
};

int main()
{
    struct complex comp1, comp2,add,sub,mul;
    printf("Enter the rp and ip of 1st complex number:\n");
    scanf("%d%d", &comp1.rp, &comp1.ip);
    printf("\nEnter the rp and ip of 2nd complex number:\n");
    scanf("%d%d", &comp2.rp, &comp2.ip);
    add.rp = comp1.rp + comp2.rp;
    add.ip = comp1.ip + comp2.ip;
    sub.rp = comp1.rp - comp2.rp;
    sub.ip = comp1.ip - comp2.ip;
    mul.rp = (comp1.rp * comp2.rp - comp1.ip * comp2.ip);
    mul.ip = (comp1.rp * comp2.ip + comp1.ip * comp2.rp);
    printf("The sum of these numbers is %d + %di", add.rp, add.ip);
    printf("\nThe Subtraction of these numbers is %d + %di", sub.rp, sub.ip);
    printf("\nThe Multiplication of these numbers is %d + %di", mul.rp, mul.ip);
    printf("\nThank you exitting....");
    return 0;
}
