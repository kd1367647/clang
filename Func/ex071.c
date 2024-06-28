#include<stdio.h>
int gokei(int a, int b,int c);
float heikin(int a, int b, int c);
main()
{
	int a, b, c, g;
	float h;
	printf("®”‚ğ3‚Â“ü—Í:");
	scanf("%d%d%d", &a, &b, &c);
	g = gokei(a, b, c);
	h = heikin(a, b, c);
	printf("‡Œv=%d  •½‹Ï=%.2f", g,h);
}
int gokei(int a, int b, int c)
{
	int g;
	g = a + b + c;
	return g;
	// return a+b+c; ‚Å‚à“®‚­
}
float heikin(int a, int b, int c)
{
	float h;
	h =(a + b + c)/3.0;
	return h;
}