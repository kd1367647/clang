#include<stdio.h>
main()
{
	char c;
	printf("アルファベット小文字? ");
	scanf("%c", &c);
	for (c; c <= 'y'; c++) {
		printf("%c ", c - 31);
	}
}