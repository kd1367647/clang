#include<stdio.h>
main()
{
	int i, s, d[10] = { 12,5,30,77,16,3,47,29,37,33 };
	printf("<12,5,30,77,16,3,47,29,37,33>\n�̒�����T���l����� :");
	scanf("%d", &s);
	for (i = 0; i < 10; i++) {
		if (s == d[i]) {
			break;
		}
	}
	if (i >= 10) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("�z���%d�ԖڂɌ�������\n", i);
	}
}