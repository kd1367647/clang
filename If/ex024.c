#include<stdio.h>
main()
{
	char moji;
	printf("文字を入力:");
	scanf("%c", &moji);
	if (moji >= 0x41) {
		if (moji <= 0x5A) {
			printf("大文字です\n");
		}
		else {
			printf("その他の文字です\n");
		}
	}
	else {
		scanf("その他の文字です\n");
	}
}