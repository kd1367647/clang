#include<stdio.h>
main() {
	int i = 0, n, g = 0;
	do {
		printf("����(-999�ŏI��)? ");
		scanf("%d", &n);
		if (n != -999) {
			g += n;
			i++;
		}
	} while (n != -999);
		printf("���v=%d\n����=%f\n", g, (float)g /i);
}