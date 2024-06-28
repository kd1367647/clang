#include<stdio.h>
main()
{
	int n, g, i;
	g = 0;
	i = 0;
	printf("•Ï”(-999‚ÅI—¹)?");
	scanf("%d", &n);
	while (n != -999) {
		g += n;
		printf("•Ï”(-999‚ÅI—¹)?");
		scanf("%d", &n);
		i++;
	}
	printf("‡Œv=%d\n", g);
	printf("•½‹Ï=%.2f\n", (float)g /i);
}