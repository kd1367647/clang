#include<stdio.h>
main()
{
	int n, m;
	while ("") {
		printf("����1(-999�ŏI��)? ");
		scanf("%d", &n);
		printf("����2(-999�ŏI��)? ");
		scanf("%d", &m);
		if (n == -999||m == -999)break;
		if (n == 0||m == 0)continue;
		printf("%d/%d=%d���܂�%d\n", n, m, n / m, n % m);
	}
}