#include<stdio.h>
main()
{
	int s,h,m;
	printf("秒数を入力 : ");
	scanf("%d", &s);
	if (s >= 0) {
		if (s <= 5000) {
			h = s / 3600;
			s = s % 3600;
			m = s / 60;
			s = s % 60;
			printf("%d時間%d分%d秒です", h, m, s);
		}
		else {
			printf("エラー\n");
		}
	}
	else {
		printf("エラー\n");
	}
}