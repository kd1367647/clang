#include<stdio.h>
main()
{
	int n;

	printf("��������:");
	scanf("%d", &n);
	while (n>0) {
		printf("*");
		n--;
	}
}