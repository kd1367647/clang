#include<stdio.h>
main()
{
	char c;
	printf("�A���t�@�x�b�g������? ");
	scanf("%c", &c);
	for (c; c <= 'y'; c++) {
		printf("%c ", c - 31);
	}
}