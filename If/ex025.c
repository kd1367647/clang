#include<stdio.h>
main()
{
	char m;
	printf("文字を入力:");
	scanf("%c", &m);
	if (m >= 'A' && m <= 'Z' || m >= 'a' && m <= 'z')
	{
		printf("アルファベットです\n");
	}
	else {
		if (m >= '0' && m <= '9') {
			printf("数字です\n");
		}
		else {
			printf("その他の文字\n");
		}
	}
}
