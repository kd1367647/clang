#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	
	c = getchar();
	while (c != EOF) {		//�f�[�^�̓��͊���  //ctrl+Z�ŏI��
		putchar(c);
		putchar('\n');
		gets(dumy);
		c = getchar();		//���̓o�b�t�@�̃N���A
	}
}