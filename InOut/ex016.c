#include<stdio.h>
main()
{
	float f;

	printf("実数を入れて :");
	scanf("%f", &f);
	printf("2倍にすると %.2f\n", f * 2);
	printf("3倍にすると %.2f\n", f * 3);
}