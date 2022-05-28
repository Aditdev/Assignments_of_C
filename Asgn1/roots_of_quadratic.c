#include <stdio.h>
#include <math.h>

int main()
{
    int x1, x2, d, a, b, c;
    printf("What are a,b and c in the quadratic equation?\n");
    scanf("%d%d%d", &a, &b, &c);
    d = b * b - 4 * a * c;
    a *= 2;
    if (d >= 0){
        x1 = (-b + sqrt(d)) / a;
        x2 = (-b - sqrt(d)) / a;
        printf("Roots of quadratic equation are %d and %d", x1, x2);
    }
    else
        printf("The roots are imaginary and cannot be calculated by this program.");
    return 0;
}