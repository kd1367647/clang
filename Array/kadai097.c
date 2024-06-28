#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 }, c[10], i, m;
	printf("”z—ña=");
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("”z—ñc=");
	for (i = 0, m = 9; i < 10 && m >= 0; i++, m--) {
		c[m] = a[i];
	}
	for (m=0; m<10; m++) {
		printf("%d ", c[m]);
	}
}