#include<stdio.h>
main()
{
	int data[]={10,5,23,29,2,6,3,1,70,100},i,m=0,s=1000;
	printf("”z—ña=");
	for (i = 0; i < 10; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++) {
		if (m < data[i]) { m = data[i]; }
		if (s > data[i]) { s = data[i]; }
	}
	printf("Å‘å’l=%d  Å¬’l=%d", m, s);
}