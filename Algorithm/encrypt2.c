#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	srand(time(0));
	char s[30];
	int i, n;
	int	k[6];
	printf("���������͂��Ă�������>");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0';i++) {
		k[i] = rand()%6;
		s[i] += k[i];
	}
	printf("�Í����������,%s\n", s);
	printf("�Í��L�[��");
	for (n = 0; n < i; n++); {
		printf("%d", k[n]);
	}
}