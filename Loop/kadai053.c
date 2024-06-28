#include<stdio.h>
main()
{
	int a, i;
	printf("®”? ");
	scanf("%d", &a);
	for (i = a; i <= a + 10; i++) {
		printf("%d ", i);
	}
}