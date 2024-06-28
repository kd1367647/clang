#include<stdio.h>
main()
{
	char box[6]="Apple";
	int i;

	printf("一文字ずつ表示\n");
	for (i = 0; box[i] != '\0';i++) {
		printf("%c", box[i]);
	}

	printf("\n文字列を表示\n");
	//printf("%s\n",&box[0]);//%sの時はアドレスを指定
	printf("%s\n", box);//配列名だけ書くと先頭アドレスを表す
}