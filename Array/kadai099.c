#include<stdio.h>
main()
{
	int i, n;
	char data[30];
	printf("�񐔂ƕ���������> ");
	scanf("%d %s", &n, &data);
	for (i = 0; i < n; i++) {
		printf("%s   ", data);
	}
}
