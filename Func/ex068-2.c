#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	char* p;
	
	p = gets(dumy);
	while (p!=NULL) {		//データの入力完了  //ctrl+Zで終了
		printf("%s\n",dumy);
		p = gets(dumy);		//入力バッファのクリア
	}
}