#include <stdio.h>
struct student
{
    char Name[100];
    int rno, fees;
} s[10];

int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter the details of Student %d\n", i + 1);
        
        printf("Name:");

        scanf("\n%[^\n]s", s[i].Name);
        
        printf("Roll No.:\n");

        scanf("%d", &s[i].rno);
        
        printf("Fees:\n");

        scanf("%d", &s[i].fees);
    }
    printf("---Details of Students---\n");
    printf("Name\tRoll No\tFees\n");
    for (i = 0; i < 10; i++)
    {
        printf("%s\t", s[i].Name);
        printf("%d\t", s[i].rno);
        printf("%d\n", s[i].fees);
    }

    return 0;
}