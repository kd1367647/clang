#include<stdio.h>
main()
{
	int i = 1, g = 0;
	do {
		printf("%d", i);
		g += i;
		i++;
		if (g <= 300) {
			printf("+");
		}
	} while (g <= 300);
	printf("=%d", g);
}