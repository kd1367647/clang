#include<stdio.h>
main()
{
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	int high, low, mid, s;
	printf("<10,15,18,23,28,35,47,55,68,78,96>\n‚Ì’†‚©‚ç’Tõ’l‚ğ“ü—Í");
	scanf("%d", & s);
	low = 0;
	high = 10;
	while (low <= high) {
		mid = (high + low) / 2;
		if (s == d[mid]) {
			break;
		}
		if (s > d[mid]) {
			low = mid + 1;
		}
		if (s < d[mid]) {
			high = low - 1;
		}
	}
	if (low > high) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("%d”Ô–Ú‚ÉŒ©‚Â‚©‚Á‚½\n", mid);
	}
}