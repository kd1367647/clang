#include<stdio.h>
main()
{
	int no,no1, no2;
	printf("���Z�������:");
	scanf("%d", &no);
	if (no == 1) {
		printf("��̐��������:");
		scanf("%d%d",&no1,&no2);
		printf("%d", no1+no2);
	}
	else {
		if (no == 2) {
			printf("��̐��������:");
			scanf("%d%d",&no1,&no2);
			printf("%d", no1 - no2 );
		}
		else {
			if (no == 3) {
				printf("��̐��������:");
				scanf("%d%d", &no1, &no2);
				printf("%d", no1 * no2 );
			}
			else {
				if (no == 4){
					printf("��̐��������:");
					scanf("%d%d", &no1, &no2);
					printf("%d", no1 / no2 );
				}
			}
		}
	}
}