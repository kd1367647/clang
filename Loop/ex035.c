#include<stdio.h>
main()
{
	int n,gokei;
	gokei = 0;
	while (1) {
		printf("��������:");
		scanf("%d,", &n);
		if (n == -999) {
			break;
		}
		gokei += n;
	}
	printf("���v=%d", gokei);
}