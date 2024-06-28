#include<stdio.h>
main()
{
	char c;
	printf("‚P•¶Žš“ü—Í?");
	scanf("%c", &c);
	if ('a' <= c && c <= 'z') {
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", c - 32);
	}
	else {
		if ('A' <= c && c <= 'Z') {
			printf("•ÏŠ·Œ‹‰Ê‚Í%c", c + 32);
		}
		else {
			printf("%c", c);
		}
	}
}