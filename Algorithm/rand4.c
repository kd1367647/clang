#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int un,i;
	printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í");
	srand(time(0));
	rand();

	un = rand() % 5 + 1;
	for (i = 0; i < un; i++) {
		printf(" ™ ");
	}
	printf("‚Å‚·\n");
}