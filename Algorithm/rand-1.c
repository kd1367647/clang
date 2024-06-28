#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, n,p;
	srand(time(0));
	rand();
	n = rand() % 1000 + 1;
	i = 0;
	do{ 
		printf("1`1000‚Ì’†‚Å“–‚½‚è‚Ì”‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢\n“–‚½‚è‚Ì”‚Í?->");
		scanf("%d", &p);
		if (n < p) {
			printf("“–‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·\n");
		}
			if (n > p) {
				printf("“–‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·\n");
			}
		i++;
	} while (n != p);
	printf("“–‚½‚è‚Å‚·%d‰ñ–Ú‚Å“–‚½‚è‚Ü‚µ‚½\n", i);
		
}