#include<stdio.h>
main()
{
	int y;
	printf("¼—ï‚ğ“ü—Í:");
	scanf("%d", &y);
	if (y % 4 == 0 && y % 100 != 0)
	{
		printf("‚¤‚é‚¤”N‚Å‚·\n");
	}
	if (y % 400 == 0)
	{
		printf("‚¤‚é‚¤”N‚Å‚·\n");
	}
	else {
		printf("•½”N‚Å‚·\n");
	}
}