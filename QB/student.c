#include <stdio.h>
struct student
{
    char Name[100];
    int rno, fees;
} s[];

int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter the details of Student %d", i + 1);
        printf("His/Her Name:");
        scanf("\n%[^\n]s", s[i].Name);
        printf("His/Her Roll No.:\n");
        scanf("%d", &s[i].rno);
        printf("His/Her Fees:\n");
        scanf("%d", &s[i].fees);
    }
    printf("---Details of Students---\n");
    printf("Name\tRoll No.\tFees\n");
    for (i = 0; i < 10; i++)
    {
        printf("%s\t", s[i].Name);
        printf("%d\t", s[i].rno);
        printf("%d\n", s[i].fees);
    }

    return 0;
}