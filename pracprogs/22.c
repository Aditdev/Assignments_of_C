#include <stdio.h>
#include <string.h>

struct Database
{
    char Name[100], gender;
    int idno, rno;
};

int main()
{
    int i, n;
    printf("Enter the number of students:\n");
    scanf("%d", &n);
    // Student Database using structures
    struct Database s[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter Students name:");
        scanf("%s", s[i].Name);
        printf("What is Roll No:");
        scanf("%d", &s[i].rno);
        printf("What is ID No:");
        scanf("%d", &s[i].idno);
        printf("Select Gender accordingly\nF--Female\tM-->Male\tO-->Others");
        scanf("%s", &s[i].gender);
    }
    
    printf("Data base is:\n");
    for (i = 0; i < n; i++)
    {
        printf("Information of student %d:", i + 1);
        printf("Name: %s\n", s[i].Name);
        printf("Roll No.:%d\n", s[i].rno);
        printf("ID No.:%d\n", s[i].idno);
        printf("Gender: %c\n\n", s[i].gender);
    }

    return 0;
}