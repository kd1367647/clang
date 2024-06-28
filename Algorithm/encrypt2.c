#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	srand(time(0));
	char s[30];
	int i, n;
	int	k[6];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0';i++) {
		k[i] = rand()%6;
		s[i] += k[i];
	}
	printf("ˆÃ†‰»•¶š—ñ‚Í,%s\n", s);
	printf("ˆÃ†ƒL[‚Í");
	for (n = 0; n < i; n++); {
		printf("%d", k[n]);
	}
}