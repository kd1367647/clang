#include<stdio.h>
main()
{
	int n;
	printf("0から100までの整数?");
	scanf("%d", &n);
	if (n >= 90&&n >= 100) {
		printf("その数値の判定結果は「5」です");
	}
	else {
		if (n >= 80&&n < 90) {
			printf("その数値の判定結果は「4」です");
		}
		else {
			if (n >= 50&&n < 80) {
				printf("その数値の判定結果は「3」です");
			}
			else {
				if (n >= 30&&n < 50) {
					printf("その数値の判定結果は「2」です");
				}
				else {
					printf("その数値の判定結果は「1」です");
				}
			}
		}
	}
}