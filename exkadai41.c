#include<stdio.h>
main()
{
	int n, g, i;
	g = 0;
	i = 0;
	printf("�ϐ�(-999�ŏI��)?");
	scanf("%d", &n);
	while (n != -999) {
		g += n;
		printf("�ϐ�(-999�ŏI��)?");
		scanf("%d", &n);
		i++;
	}
	printf("���v=%d\n", g);
	printf("����=%.2f\n", (float)g /i);
}