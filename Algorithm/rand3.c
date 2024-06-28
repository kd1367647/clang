#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int d;

	srand(time(0));
	rand();
	d = rand() % 100 + 1;
	if (d <= 30) {
		printf("‚©‚¢‚µ‚ñ‚Ì‚¢‚¿‚°‚«!\n");
	}
	else {
		printf("’ÊíUŒ‚\n");
	}
}