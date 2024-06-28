#include<stdio.h>
main()
{
	char a=0;
	printf("アルファベット小文字? ");
	scanf("%c",&a);
	for (a; a <= 'z'; a++) {
		printf("%c ", a);
	}
}