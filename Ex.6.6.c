#include<stdio.h>
#include<conio.h>
main()
{
	int i, count;
	float sum, average;
	printf("Enter the last value: ");
	scanf("%d", &count);
	for (i=1;i<=count;i++)
	{
		printf("%d\n", i);
		sum+=i;
	}
	printf("\nThe summation of 1+2+...+%d is %f\n", count,sum);
	average = sum/count;
	printf("\nThe average value is %f", average);
	getch();
	return 0;
}
