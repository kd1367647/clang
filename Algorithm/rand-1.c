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
		printf("1〜1000の中で当たりの数を予想してください\n当たりの数は?->");
		scanf("%d", &p);
		if (n < p) {
			printf("当たりの数より大きいです\n");
		}
			if (n > p) {
				printf("当たりの数より小さいです\n");
			}
		i++;
	} while (n != p);
	printf("当たりです%d回目で当たりました\n", i);
		
}