#include<stdio.h>
main()
{
	int a=0;
	while (a != -1) {
		printf("�����R�[�h(-1�ŏI��)? ");
		scanf("%d", &a);
		if (a != -1) {
			printf("%c\n", a);
		}
	}
}