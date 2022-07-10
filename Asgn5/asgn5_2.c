#include <stdio.h>
#include <string.h>
struct student
{
    char Name[100];
    int rollno, phy, chem, maths, total;
} stud;

int main()
{
    printf("Tell me your students name\n");
    gets(stud.Name);
    printf("\nEnter %s's Roll No.\n", stud.Name);
    scanf("%d", &stud.rollno);
    printf("\nEnter %s's Marks in Physics, Chemistry and Maths in order\n", stud.Name);
    scanf("%d%d%d", &stud.phy, &stud.chem, &stud.maths);
    stud.total = stud.chem + stud.maths + stud.phy;
    printf("Name: %s\nRoll No: %d\nTotal Marks: %d", stud.Name, stud.rollno, stud.total);
    return 0;
}
