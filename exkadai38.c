#include<stdio.h>
main()
{
	char c;
	printf("�P��������?");
	scanf("%c", &c);
	if ('a' <= c && c <= 'z') {
		printf("�ϊ����ʂ�%c", c - 32);
	}
	else {
		if ('A' <= c && c <= 'Z') {
			printf("�ϊ����ʂ�%c", c + 32);
		}
		else {
			printf("%c", c);
		}
	}
}