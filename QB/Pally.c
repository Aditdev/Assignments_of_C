/*
Q3.Write a program to check whether a word is palindrome or not.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, l, pally;
    gets(str);
    l = (strlen(str));
    for (i = 0; i < l/2; i++)
    {
        printf("%d\n",i);
        if (str[i] == str[l - i - 1])
            {pally = 1;}
        else
        {
            pally = 0;
            break;
        }
    }
    if (pally == 1)
        printf("%s is a Pallyndrome", str);
    else
        printf("%s is not a pallyndrome", str);
    return 0;
}