#include<stdio.h>
main()
{
	int n;
	printf("0����100�܂ł̐���?");
	scanf("%d", &n);
	if (n >= 90&&n >= 100) {
		printf("���̐��l�̔��茋�ʂ́u5�v�ł�");
	}
	else {
		if (n >= 80&&n < 90) {
			printf("���̐��l�̔��茋�ʂ́u4�v�ł�");
		}
		else {
			if (n >= 50&&n < 80) {
				printf("���̐��l�̔��茋�ʂ́u3�v�ł�");
			}
			else {
				if (n >= 30&&n < 50) {
					printf("���̐��l�̔��茋�ʂ́u2�v�ł�");
				}
				else {
					printf("���̐��l�̔��茋�ʂ́u1�v�ł�");
				}
			}
		}
	}
}