#include<stdio.h>
main()
{
	int i, n, m;
	printf("   1 2 3 4 5 6 7 8 9\n===============\n");
	for (i = 1; i < 10; i++) {
		printf("%d }", i);
		for (n = 1; n < 10; n++) {
			printf("%d ", i * n);
		}
		printf("\n");
	}
}