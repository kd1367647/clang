#include<stdio.h>
int gokei(int a, int b,int c);
float heikin(int a, int b, int c);
main()
{
	int a, b, c, g;
	float h;
	printf("������3����:");
	scanf("%d%d%d", &a, &b, &c);
	g = gokei(a, b, c);
	h = heikin(a, b, c);
	printf("���v=%d  ����=%.2f", g,h);
}
int gokei(int a, int b, int c)
{
	int g;
	g = a + b + c;
	return g;
	// return a+b+c; �ł�����
}
float heikin(int a, int b, int c)
{
	float h;
	h =(a + b + c)/3.0;
	return h;
}