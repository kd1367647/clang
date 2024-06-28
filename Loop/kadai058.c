#include<stdio.h>
main()
{
	int i;
	for (i = 32; i < 127; i++) {
		printf("%c %x",i-1,i);
		if (i % 10 == 1) {
			printf("\n");
		}
	}
}