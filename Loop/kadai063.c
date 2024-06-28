#include<stdio.h>
main()
{
	int i=1;
	while (i <= 20) {
		printf("%2d ", i);
		i++;
		if (i % 10 == 1) {
			printf("\n");
		}
	}
}