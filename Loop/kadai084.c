#include<stdio.h>
main()
{
	int n, m;
	while ("") {
		printf("実数1(-999で終了)? ");
		scanf("%d", &n);
		printf("実数2(-999で終了)? ");
		scanf("%d", &m);
		if (n == -999||m == -999)break;
		if (n == 0||m == 0)continue;
		printf("%d/%d=%dあまり%d\n", n, m, n / m, n % m);
	}
}