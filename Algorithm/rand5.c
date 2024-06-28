#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int n,i;
	srand(time(NULL));
	for (i = 0; i < 100; i++) {
		rand();
		n = rand() % 300 + 1;
		printf("%4d ", n);
		if (i % 10 == 0) {
			printf("\n")
		}
	}
}