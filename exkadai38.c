#include<stdio.h>
main()
{
	char c;
	printf("１文字入力?");
	scanf("%c", &c);
	if ('a' <= c && c <= 'z') {
		printf("変換結果は%c", c - 32);
	}
	else {
		if ('A' <= c && c <= 'Z') {
			printf("変換結果は%c", c + 32);
		}
		else {
			printf("%c", c);
		}
	}
}