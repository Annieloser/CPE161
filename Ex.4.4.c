#include<stdio.h>
#include<conio.h>
main()
{
	int y=10.0, z=5.0, t=2.0;
	int ten, five, two, one, money;	
	printf("Enter money: ");
	scanf("%d", &money);
	ten= money/y;
	five= (int)money%(int)y/(int)z;
	two= (int)money%(int)y%z/t;
	one= money%y%z%t;
	printf("All change of %d\n", money);
	printf("Number of ten baht is %d coins.\n",ten);
	printf("Number of five baht is %d coins.\n",five);
	printf("Number of two baht is %d coins.\n",two);
	printf("Number of one baht is %d coins.\n",one);
	getch();
	return 0;
}
