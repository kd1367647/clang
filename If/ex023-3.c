#include<stdio.h>
main()
{
	int no,no1, no2;
	printf("演算式を入力:");
	scanf("%d", &no);
	if (no == 1) {
		printf("二つの整数を入力:");
		scanf("%d%d",&no1,&no2);
		printf("%d", no1+no2);
	}
	else {
		if (no == 2) {
			printf("二つの整数を入力:");
			scanf("%d%d",&no1,&no2);
			printf("%d", no1 - no2 );
		}
		else {
			if (no == 3) {
				printf("二つの整数を入力:");
				scanf("%d%d", &no1, &no2);
				printf("%d", no1 * no2 );
			}
			else {
				if (no == 4){
					printf("二つの整数を入力:");
					scanf("%d%d", &no1, &no2);
					printf("%d", no1 / no2 );
				}
			}
		}
	}
}