#include<stdio.h>
main()
{
	int g, n;
	for (n = 1, g = 0; n <= 10; n++) {
		g += n;
		printf("1から%dまでの和=%d\n", n, g);
	}
}