#include<stdio.h>
main()
{
	int n,i=0, g = 0;
	while ("") {
		printf("����(-999�ŏI��)? ");
		scanf("%d",&n);
		if (n == -999)break;
		g += n;
		i++;
	}
	printf("���v=%d \n����=%.3f", g, (float)g / i);
}