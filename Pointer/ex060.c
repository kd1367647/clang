#include<stdio.h>
main()
{
	char data[15] = "Language";
	char* p_data;
	char c;
	int i,j;
	printf("data[]=%s\n",data);
	printf("検索文字は? ");
	scanf("%c", &c);
	printf("検索結果は,");
	for (p_data = data,i=0,j=0; *(p_data+i)!='\0'; i++) {
		if (c == *(p_data+i)) {
			printf("%d ", i+1);
			j++;
		}
	}
	if (j>0) {
		printf("文字目です\n");
	}
	else {
		printf("見つかりません\n");
	}
}