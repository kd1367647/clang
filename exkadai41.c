#include<stdio.h>
main()
{
	int n, g, i;
	g = 0;
	i = 0;
	printf("変数(-999で終了)?");
	scanf("%d", &n);
	while (n != -999) {
		g += n;
		printf("変数(-999で終了)?");
		scanf("%d", &n);
		i++;
	}
	printf("合計=%d\n", g);
	printf("平均=%.2f\n", (float)g /i);
}