#include<stdio.h>
main()
{
	int n;

	printf("数を入れて:");
	scanf("%d", &n);
	while (n>0) {
		printf("*");
		n--;
	}
}