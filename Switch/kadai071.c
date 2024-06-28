#include<stdio.h>
main()
{
	int n, m;
	char c;
	printf("®”1? ");
	scanf("%d", &n);
	printf("®”2? ");
	scanf("%d", &m);
	printf("‰‰Zq? ");
	scanf("%s", &c);
	switch (c) {
	case '+':printf("%d+%d=%d", n, m, n + m); break;
	case '-':printf("%d-%d=%d", n, m, n - m); break;
	case '*':printf("%d*%d=%d", n, m, n * m); break;
	case '/':printf("%d/%d=%d", n, m, n / m); break;
	case '%':printf("%d/%d=%d‚ ‚Ü‚è%d", n, m, n / m,n%m); break;
	}
}