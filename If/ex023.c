#include<stdio.h>
main()
{
	int no,h,m;
	printf("•b”‚ğ“ü—Í : ");
	scanf("%d", &no);
	if (no <= 5000) {
		h = no / 3600;
		no = no % 3600;
		m = no / 60;
		no = no % 60;
		printf("%dŠÔ%d•ª%d•b‚Å‚·", h, m, no);
	}
	else {
		printf("ƒGƒ‰[\n");
	}
}