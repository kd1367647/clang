#include<stdio.h>
main()
{
	int a=0;
	while (a != -1) {
		printf("文字コード(-1で終了)? ");
		scanf("%d", &a);
		if (a != -1) {
			printf("%c\n", a);
		}
	}
}