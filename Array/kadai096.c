#include<stdio.h>
main()
{
	int c[10], n, i, m=0;
	for (i = 0; i < 10; i++) {
		printf("����(-999�ŏI��)? ");
		scanf("%d", &n);
		m++;
		if (n == -999)break;
		c[i] = n;

	}
	printf("\n�z��c=");
	for (i = 0; i < (m - 1); i++) {
		printf("%d ", c[i]);

	}
}