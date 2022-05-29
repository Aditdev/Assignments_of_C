#include <stdio.h>
#include <string.h>

int main()
{
    int a, vcount = 0, ccount = 0;
    char str[100];
    int i;
    printf("Enter a string (without space):");
    scanf("%[^\n]s", str);
    a = strlen(str);
    printf("The String is %s", str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            vcount++;
        else if (str[i] != ' ')
            ccount++;
        else
            continue;
    }
    printf("There are %d Vowel(s) and %d consonant(s)", vcount, ccount);

    return 0;
}