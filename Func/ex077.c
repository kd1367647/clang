#include<stdio.h>
void hikaku(int a, int b, int c, int* max, int* small);
main()
{
	int a, b, c, m, s;
	printf("������3����: ");
	scanf("%d%d%d", &a, &b, &c);
	hikaku(a, b, c, &m, &s);
	printf("�ő�l=%d  �ŏ��l=%d\n", m, s);
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

