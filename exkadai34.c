#include<stdio.h>
main()
{
	char c;
	printf("一文字入力");
	scanf("%c", &c);
	if ('a' < c && c < 'z') {
	}
	else {
		printf("エラー\n");
	}
}