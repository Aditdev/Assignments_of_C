// C code to illustrate working of

// getch() to accept hidden inputs

#include <conio.h>
#include <direct.h> // delay()
#include <stdio.h>
#include <string.h>

void main()
{

	// Taking the password of 8 characters
	char pwd[100];
	int i;

	// To clear the screen
	// clrscr();

	printf("Enter Password: ");
	for (i = 0; i < 11; i++)
	{

		// Get the hidden input
		// using getch() method
		pwd[i] = getch();

		// Print * to show that
		// a character is entered
		printf("*");
	}
	pwd[i] = '\0';
	printf("\n");

	// Now the hidden input is stored in pwd[]
	// So any operation can be done on it

	// Here we are just printing
	printf("Entered password: ");
	for (i = 0; pwd[i] != '\0'; i++)
		printf("%c", pwd[i]);

	// Now the console will wait
	// for a key to be pressed
	getch();
}
