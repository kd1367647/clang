#include<stdio.h>
main()
{
	int s,h,m;
	printf("•b”‚ð“ü—Í : ");
	scanf("%d", &s);
	if (s >= 0) {
		if (s <= 5000) {
			h = s / 3600;
			s = s % 3600;
			m = s / 60;
			s = s % 60;
			printf("%dŽžŠÔ%d•ª%d•b‚Å‚·", h, m, s);
		}
		else {
			printf("ƒGƒ‰[\n");
		}
	}
	else {
		printf("ƒGƒ‰[\n");
	}
}