#include<stdio.h>
main()
{
	int a=0;
	while (a != - 999) {
		printf("����(-999�œ��͏I��)?");
		scanf("%d",&a);
		if (a != -999) {
			printf("8�i��=%o	16�i��=%X\n", a,a);
		}
	}
}