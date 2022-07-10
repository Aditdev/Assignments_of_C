/*
Q1. Write a program to read Title, Author
and Price of 5 books using array of structures.
Display the records in ascending order of Price. 
*/

#include <stdio.h>
struct library
{
    char Title[100];
    char Author[100];
    int price;
} s[5], t;

int main()
{
    int i, j;
    // Reading
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        printf("What is the title of your book:\n");
        scanf("\n%[^\n]s", &s[i].Title);
        printf("What is the Author's Name:\n");
        scanf("\n%[^\n]s", &s[i].Author);
        printf("What is the Price of your book:\n");
        scanf("%d", &s[i].price);
    }
    // Bubble sort
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5 - i - 1; j++)
        {
            if (s[j + 1].price < s[j].price)
            {
                t = s[j];
                s[j] = s[j + 1];
                s[j + 1] = t;
            }
        }
    }
    printf("Sorted:\n");
    printf("Sr.No\tTitle\tAuthor\tPrice");
    for (i = 0; i < 5; i++)
        printf("\n%d\t%s\t%s\t%d", i + 1, s[i].Title, s[i].Author, s[i].price);
    return 0;
}