#include<stdio.h>
main()
{
	int no,h,m;
	printf("秒数を入力 : ");
	scanf("%d", &no);
	if (no <= 5000) {
		h = no / 3600;
		no = no % 3600;
		m = no / 60;
		no = no % 60;
		printf("%d時間%d分%d秒です", h, m, no);
	}
	else {
		printf("エラー\n");
	}
}