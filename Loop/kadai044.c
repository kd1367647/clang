#include<stdio.h>
main()
{
	int a=0;
	while (a != - 999) {
		printf("整数(-999で入力終了)?");
		scanf("%d",&a);
		if (a != -999) {
			printf("8進数=%o	16進数=%X\n", a,a);
		}
	}
}