#include<stdio.h>
main()
{
	char a;
	printf("アルファベット?");
	scanf("%c", &a);
	if ('a' < a&&a < 'z') {
		printf("小文字です\n");
	}
	else {
		printf("大文字です\n");
	}
}