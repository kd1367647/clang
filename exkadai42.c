#include<stdio.h>
main()
{
	int i, g;
	i = 1;
	g = 0;
	while (g < 301) {
		printf("%d", i);
		g += i;
		i++;
		if (g < 301) {
			printf("+");
		}
	}
	printf("=%d", g);
}

