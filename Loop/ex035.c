#include<stdio.h>
main()
{
	int n,gokei;
	gokei = 0;
	while (1) {
		printf("数を入れて:");
		scanf("%d,", &n);
		if (n == -999) {
			break;
		}
		gokei += n;
	}
	printf("合計=%d", gokei);
}