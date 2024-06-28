#include<stdio.h>
int max(int* p, int s);
int min(int* p, int s);
main()
{
	int a[8] = { 6,10,8,2,9,5,1,7 }, x, n;
	x = max(a,8);
	printf("Å‘å’l=%d\n", x);
	n = min(a,8);
	printf("Å¬’l=%d\n", n);
}

int max(int* p, int s)
{
	int i,x;
	for (x=*p,i = 1; i < s; i++) {
		if (x < *(p+i)) {
			x = *(p + i);
		}
	}
	return x;
}

int min(int* p, int s)
{
	int i,n;
	for (n =*p, i = 1; i < s; i++) {
		if (n > *(p + i)) {
			n= *(p + i);
		}
	}
	return n;
}