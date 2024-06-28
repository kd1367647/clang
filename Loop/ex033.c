#include<stdio.h>
main()
{
	/*int i, n, s;
	printf("数は？ ");
	scanf("%d", &n);
	for (i = 0,s=0; n != -999; i++){
		s += n;
		printf("数は？ ");
		scanf("%d", &n);
	}
	printf("合計=%d,平均=%.2f\n", s, (float)s / i);*/
	int i = 0, s = 0, n = 0;
	do {
		s += n;
		i++;
		printf("数は?");
		scanf("%d", &n);
	} while (n != -999);
	printf("合計=%d,平均=%.2f\n", s, (float)s / (i-1));
}