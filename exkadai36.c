#include<stdio.h>
main()
{
	int a, b;
	printf("®”?");
	scanf("%d", &a);
	printf("®”?");
	scanf("%d", &b);
	if (a > b) {
		printf("%d‚Ì•û‚ª%d‚æ‚è%d‘å‚«‚¢", a, b, a - b);
	}
	else {
		if (a == b) {
			printf("%d‚Æ%d‚Í“™‚µ‚¢", a, b);
		}
		else {
			if (a < b) {
				printf("%d‚Ì•û‚ª%d‚æ‚è%d¬‚³‚¢\n", a, b, b - a);
			}
		}
	}
}