#include<stdio.h>
main()
{
	int i, s, d[10] = { 12,5,30,77,16,3,47,29,37,33 };
	printf("<12,5,30,77,16,3,47,29,37,33>\nの中から探索値を入力 :");
	scanf("%d", &s);
	for (i = 0; i < 10; i++) {
		if (s == d[i]) {
			break;
		}
	}
	if (i >= 10) {
		printf("見つからなかった\n");
	}
	else {
		printf("配列の%d番目に見つかった\n", i);
	}
}