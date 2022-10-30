#include<stdio.h>
#include<conio.h>
main ()
{
	char name [15];
	char surname [30];
	printf ("Insert your name?:");
	gets (name);
	printf ("Insert your surname?:");
	gets (surname);
	printf ("\n\n Hello %s %s. \n", name, surname);
	getch ();
	return 0;
}
