#include<stdio.h>
main()
{
	char data[15] = "Language";
	char* p_data;
	char c;
	int i,j;
	printf("data[]=%s\n",data);
	printf("����������? ");
	scanf("%c", &c);
	printf("�������ʂ�,");
	for (p_data = data,i=0,j=0; *(p_data+i)!='\0'; i++) {
		if (c == *(p_data+i)) {
			printf("%d ", i+1);
			j++;
		}
	}
	if (j>0) {
		printf("�����ڂł�\n");
	}
	else {
		printf("������܂���\n");
	}
}