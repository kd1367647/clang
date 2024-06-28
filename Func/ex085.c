#include<stdio.h>
void cat(char* s1, char* s2);
main()
{
	char a[256], b[256];
	printf("”z—ña: ");
	gets(a);
	printf("”z—ñb: ");
	gets(b);
	cat(a, b);
	printf("”z—ña: %s\n",a);
}

void cat(char* s1, char* s2)
{
	int i, j;
	for (i = 0; *(s1 + i) != '\0'; i++);
	for (j = 0; *(s1 + i) = *(s2 + j); i++, j++);
}