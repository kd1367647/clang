#include<stdio.h>
main()
{
	int n, m;
	while ("") {
		printf("é¿êî1(-999Ç≈èIóπ)? ");
		scanf("%d", &n);
		printf("é¿êî2(-999Ç≈èIóπ)? ");
		scanf("%d", &m);
		if (n == -999||m == -999)break;
		if (n == 0||m == 0)continue;
		printf("%d/%d=%dÇ†Ç‹ÇË%d\n", n, m, n / m, n % m);
	}
}