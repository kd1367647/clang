#include<stdio.h>
main()
{
	int n, i;
	printf("”‚Í?");
	scanf("%d",&n);
	do {
		i = 0;
		do {
			printf("*");
			i++;
		} while (i<5);
		printf("\n");
		n--;
	} while (n > 0);
}   