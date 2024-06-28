#include<stdio.h>
main()
{
	char data[15] = "Language";
	char* p_data;
	char c;
	int i;
	printf("data[]=%s\n",data);
	printf("ŒŸõ•¶š‚Í? ");
	scanf("%c", &c);
	printf("ŒŸõŒ‹‰Ê‚Í,");
	for (p_data = data,i=0; *(p_data+i)!='\0'; i++) {
		if (c == *(p_data+i)) {
			printf(" %d ", i+1);
		}
	}
	printf(" •¶š–Ú‚Å‚·\n");
}