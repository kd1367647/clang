#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, n,p;
	srand(time(0));
	rand();
	n = rand() % 1000 + 1;
	i = 0;
	do{ 
		printf("1�`1000�̒��œ�����̐���\�z���Ă�������\n������̐���?->");
		scanf("%d", &p);
		if (n < p) {
			printf("������̐����傫���ł�\n");
		}
			if (n > p) {
				printf("������̐���菬�����ł�\n");
			}
		i++;
	} while (n != p);
	printf("������ł�%d��ڂœ�����܂���\n", i);
		
}