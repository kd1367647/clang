#include<stdio.h>
main()
{
	int a;
	printf("����?");
	scanf("%d",&a);
	if (a < 0) {
		printf("�}�C�i�X�ł�\n");
	}
	else {
		if (a == 0) {
			printf("0�ł�\n");
		}
		else {
			printf("�v���X�ł�\n");
		}
	}
}