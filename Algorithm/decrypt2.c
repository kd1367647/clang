#include<stdio.h>
main()
{
	char s[30];
	int k[30];
	int i;
	printf("���������͂��Ă�������>");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]�̈Í����L�[>",i);
		scanf("%d",&k[i]);
		s[i] -= k[i];
	}
	printf("�������ς݂̕������%s", s);
}