#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};

void display3(struct syohin_data* syohin);

main() {
	struct syohin_data syohin = { "ケシゴム",50 };
	display3(&syohin);
}

void display3(struct syohin_data* syohin)
{
	printf("%s   %d\n", syohin->name, syohin->tanka);

	//アドレスを受け取っているので
	//書き換え可能

	//単価を100にしてみる //ex095.cのsyohin2が変わる
	//syohin->tanka = 100;
}