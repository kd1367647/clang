#include<stdio.h>
main()
{
	int no,h,m;
	printf("�b������� : ");
	scanf("%d", &no);
	if (no <= 5000) {
		h = no / 3600;
		no = no % 3600;
		m = no / 60;
		no = no % 60;
		printf("%d����%d��%d�b�ł�", h, m, no);
	}
	else {
		printf("�G���[\n");
	}
}