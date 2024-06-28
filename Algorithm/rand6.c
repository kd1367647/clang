#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int p, c;
	printf("何を出しますか?\n(1:グー 2:チョキ 3:パー )");
	scanf("%d", &p);
	switch (p) {
	case  1:printf("プレイヤーはグーです\n"); break;
	case  2:printf("プレイヤーはチョキです\n"); break;
	case  3:printf("プレイヤーはパーです\n"); break;
	}
	srand(time(0));
	rand();
	c = rand() % 2;
	switch (c) {
	case  0:printf("コンピュータはグーです\n"); break;
	case  1:printf("コンピュータはチョキです\n"); break;
	case  2:printf("コンピュータはパーです\n"); break;
	}
	switch (((p-1)-c+3)%3) {
	case  2:printf("プレイヤーの勝ちです\n"); break;
	case  0:printf("あいこです\n"); break;
	case  1:printf("コンピュータの勝ちです\n"); break;
	}
}
	