#include<stdio.h>
main()
{
	/*int i, n, s;
	printf("���́H ");
	scanf("%d", &n);
	for (i = 0,s=0; n != -999; i++){
		s += n;
		printf("���́H ");
		scanf("%d", &n);
	}
	printf("���v=%d,����=%.2f\n", s, (float)s / i);*/
	int i = 0, s = 0, n = 0;
	do {
		s += n;
		i++;
		printf("����?");
		scanf("%d", &n);
	} while (n != -999);
	printf("���v=%d,����=%.2f\n", s, (float)s / (i-1));
}