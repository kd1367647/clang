#include<stdio.h>
main()
{
	int a, b;
	printf("整数?");
	scanf("%d", &a);
	printf("整数?");
	scanf("%d", &b);
	if (a > b) {
		printf("%dの方が%dより%d大きい", a, b, a - b);
	}
	else {
		if (a == b) {
			printf("%dと%dは等しい", a, b);
		}
		else {
			if (a < b) {
				printf("%dの方が%dより%d小さい\n", a, b, b - a);
			}
		}
	}
}