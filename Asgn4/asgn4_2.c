#include <stdio.h>
#include <string.h>

int main()
{
    int a, vcount=0;
    char str[10], i;
    printf("Enter a string (without space):");
    scanf("%s",str);
    a=strlen(str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            vcount++;
    }
    printf("There are %d Vowels and %d consonants", vcount,a-vcount);

    return 0;
}