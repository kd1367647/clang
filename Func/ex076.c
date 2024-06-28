#include<stdio.h>
void keisan(int a, int b, int* g,float*h);

main()
{
	int a, b, g;
	float h;
	printf("®”‚ğ2‚Â“ü—Í: ");
	scanf("%d%d",&a, &b);
	keisan(a, b, &g, &h);
	printf("‡Œv‚Í %d, •½‹Ï‚Í %.2f", g, h);
}

void keisan(int a, int b, int* g, float* h)
{
	*g = a + b;
	*h = (float)*g / 2;
	return;
}