#include <stdio.h>

struct marks
{
    int outof;
    int m1, m2, m3;
    float p;
} M;

void recieve();

int main()
{
    recieve();
    return 0;
}
void recieve()
{
    printf("Enter the marks of 3 students:\n");
    scanf("%f%f%f", &M.m1, &M.m2, &M.m3);
    printf("Enter out-of marks per subject:\n");
    scanf("%d", &M.outof);
    M.outof *=3;
    M.p = 100.00 * (M.m1 + M.m2 + M.m3) / M.outof;
    printf("The student recieved %f percentage",M.p);
}