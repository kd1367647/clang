#include<stdio.h>
main()
{
	char box[6]="Apple";
	int i;

	printf("�ꕶ�����\��\n");
	for (i = 0; box[i] != '\0';i++) {
		printf("%c", box[i]);
	}

	printf("\n�������\��\n");
	//printf("%s\n",&box[0]);//%s�̎��̓A�h���X���w��
	printf("%s\n", box);//�z�񖼂��������Ɛ擪�A�h���X��\��
}