#include<stdio.h>
main()
{
	int i;
	for (i = 1; i < 21; i++) {
		if (i % 2 == 0)continue;
		printf("%d ", i);
	}
}