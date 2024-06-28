#include<stdio.h>
main()
{
	char data[15] = "Language";
	char* p_data;
	char c;
	int i,j;
	printf("data[]=%s\n",data);
	printf("ŒŸõ•¶Žš‚Í? ");
	scanf("%c", &c);
	printf("ŒŸõŒ‹‰Ê‚Í,");
	for (p_data = data,i=0,j=0; *(p_data+i)!='\0'; i++) {
		if (c == *(p_data+i)) {
			printf("%d ", i+1);
			j++;
		}
	}
	if (j>0) {
		printf("•¶Žš–Ú‚Å‚·\n");
	}
	else {
		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ\n");
	}
}