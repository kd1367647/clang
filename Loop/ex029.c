#include<stdio.h>
main()
{
	int n, i;

	printf("数を入れて:");
	scanf("%d", &n);
	i = 0;
	while (i < n) {
		printf("*");
		i++;
	}
}