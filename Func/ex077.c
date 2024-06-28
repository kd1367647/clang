#include<stdio.h>
void hikaku(int a, int b, int c, int* max, int* small);
main()
{
	int a, b, c, m, s;
	printf("®”‚ğ3‚Â“ü—Í: ");
	scanf("%d%d%d", &a, &b, &c);
	hikaku(a, b, c, &m, &s);
	printf("Å‘å’l=%d  Å¬’l=%d\n", m, s);
}



void hikaku(int a, int b, int c, int* max, int* small)
{
	*max = a;
	*small = b;
	if (*max < b) {
		*max = b;
		*small = a;
		if (*small > c) { *small = c; }
	}
		if (*max < c) {
			*max = c;
			*small = a;
			if (*small > b) { *small = b; }
		}
	if (*small > c) { *small = c; }
	return;
}

