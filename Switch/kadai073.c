#include<stdio.h>
main()
{
	int i;
	char c;
	printf("10進数の整数? ");
	scanf("%d",&i);
	printf("アルファベット(o or h or d)? ");
	scanf("%s",&c);
	switch (c) {
	case 'o':printf("%o\n", i); break;
	case 'h':printf("%x\n", i); break;
	default:printf("%d\n", i); break;
	}
}