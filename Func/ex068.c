#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	
	c = getchar();
	while (c != EOF) {		//データの入力完了  //ctrl+Zで終了
		putchar(c);
		putchar('\n');
		gets(dumy);
		c = getchar();		//入力バッファのクリア
	}
}