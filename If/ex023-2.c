#include<stdio.h>
main()
{
	int y;
	printf("��������:");
	scanf("%d", &y);
	if (y % 4 == 0 && y % 100 != 0)
	{
		printf("���邤�N�ł�\n");
	}
	if (y % 400 == 0)
	{
		printf("���邤�N�ł�\n");
	}
	else {
		printf("���N�ł�\n");
	}
}