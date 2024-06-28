#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	char data,data2;	//入力

	c = scanf("%c%c",&data,&data2);
	while (c != EOF) {		//データの入力完了  //ctrl+Zで終了
		printf("%d",c);
		putchar('\n');
		gets(dumy);
		c = scanf("%c%c",&data,&data2);		//入力バッファのクリア
	}

	printf("%d\n", printf("HELLO"));	//5が表示される
	printf("%d\n", printf("こんにちは"));	//10が表示される
}