#include <stdio.h>

// Structure for complex numbers
struct complex
{
    int rp;
    int ip;
};

// Structure for Complex Operations
struct compops
{
    int addip;
    int addrp;
    int subip, subrp;
    int mulip, mulrp;
};

int main()
{
    struct complex comp1, comp2;
    struct compops c;
    printf("Enter the rp and ip of 1st complex number:\n");
    scanf("%d%d", &comp1.rp, &comp1.ip);
    printf("\nEnter the rp and ip of 2nd complex number:\n");
    scanf("%d%d", &comp2.rp, &comp2.ip);
    c.addrp = comp1.rp + comp2.rp;
    c.addip = comp1.ip + comp2.ip;
    c.subrp = comp1.rp - comp2.rp;
    c.subip = comp1.ip - comp2.ip;
    c.mulrp = (comp1.rp * comp2.rp - comp1.ip * comp2.ip);
    c.mulip = (comp1.rp * comp2.ip + comp1.ip * comp2.rp);
    printf("The sum of these numbers is %d + %di", c.addrp, c.addip);
    printf("\nThe Subtraction of these numbers is %d + %di", c.subrp, c.subip);
    printf("\nThe Multiplication of these numbers is %d + %di", c.mulrp, c.mulip);
    printf("\nThank you exitting....");
    return 0;
}
