#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	srand(time(0));
	char s[30];
	int i, n;
	int	k[6];
	printf("文字列を入力してください>");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0';i++) {
		k[i] = rand()%6;
		s[i] += k[i];
	}
	printf("暗号化文字列は,%s\n", s);
	printf("暗号キーは");
	for (n = 0; n < i; n++); {
		printf("%d", k[n]);
	}
}