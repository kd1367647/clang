#include<stdio.h>
main()
{
	int no,no1, no2;
	printf("‰‰Z®‚ğ“ü—Í:");
	scanf("%d", &no);
	if (no == 1) {
		printf("“ñ‚Â‚Ì®”‚ğ“ü—Í:");
		scanf("%d%d",&no1,&no2);
		printf("%d", no1+no2);
	}
	else {
		if (no == 2) {
			printf("“ñ‚Â‚Ì®”‚ğ“ü—Í:");
			scanf("%d%d",&no1,&no2);
			printf("%d", no1 - no2 );
		}
		else {
			if (no == 3) {
				printf("“ñ‚Â‚Ì®”‚ğ“ü—Í:");
				scanf("%d%d", &no1, &no2);
				printf("%d", no1 * no2 );
			}
			else {
				if (no == 4){
					printf("“ñ‚Â‚Ì®”‚ğ“ü—Í:");
					scanf("%d%d", &no1, &no2);
					printf("%d", no1 / no2 );
				}
			}
		}
	}
}