#include<stdio.h>
main()
{
	int data, sum=0, cnt=0,ret;
	printf("����:");
	ret = scanf("%d", &data);
	while (ret != EOF) {
		sum += data;
		cnt++;

		printf("����:");
		ret = scanf("%d", &data);
	}
	printf("���v=%d  ����=%.2f\n", sum,(float) sum / cnt);
}

