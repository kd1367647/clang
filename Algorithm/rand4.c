#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int un,i;
	printf("�����̂��Ȃ��̉^����");
	srand(time(0));
	rand();

	un = rand() % 5 + 1;
	for (i = 0; i < un; i++) {
		printf(" �� ");
	}
	printf("�ł�\n");
}