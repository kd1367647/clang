#include<stdio.h>
main()
{
	int d[10 + 1] = { 12,5,30,77,16,3,47,29,37,33 };
	int i, s;
	printf("<12,5,30,77,16,3,47,29,37,33>\nの中から探索値を入力 :");
	scanf("%d", &s);
	d[10] = s;
	for (i=0; s != d[i]; i++) {}
	if (i >= 10) {
		printf("見つからなかった\n");
	}
	else {
		printf("配列の%d番目に見つかった\n", i);
	}

}
