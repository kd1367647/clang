#include<stdio.h>
main()
{
	int a, b;
	printf("����?");
	scanf("%d", &a);
	printf("����?");
	scanf("%d", &b);
	if (a > b) {
		printf("%d�̕���%d���%d�傫��", a, b, a - b);
	}
	else {
		if (a == b) {
			printf("%d��%d�͓�����", a, b);
		}
		else {
			if (a < b) {
				printf("%d�̕���%d���%d������\n", a, b, b - a);
			}
		}
	}
}