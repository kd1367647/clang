#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 }, c[10];
	int i, g;
	printf("�z��a=");
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	g = 0;
	for (i = 0; i < 10; i++) {
		g += a[i];
	}
	printf("���v=%d ����=%d",g,g/(i+1));
	printf("\n");
	printf("�z��b=");
	for (i = 0; i < 10; i++) {
		printf("%d ", b[i]);
	}
	printf("\n");
	g = 0;
	for (i = 0; i < 10; i++) {
		g += b[i];
	}
	printf("���v=%d ����=%d", g,g / (i + 1));
	printf("\n");



}