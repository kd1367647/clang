#include<stdio.h>
main()
{
	int i, n;
	char data[30];
	printf("回数と文字列を入力> ");
	scanf("%d %s", &n, &data);
	for (i = 0; i < n; i++) {
		printf("%s   ", data);
	}
}
