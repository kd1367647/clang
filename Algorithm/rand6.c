#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int p, c;
	printf("�����o���܂���?\n(1:�O�[ 2:�`���L 3:�p�[ )");
	scanf("%d", &p);
	switch (p) {
	case  1:printf("�v���C���[�̓O�[�ł�\n"); break;
	case  2:printf("�v���C���[�̓`���L�ł�\n"); break;
	case  3:printf("�v���C���[�̓p�[�ł�\n"); break;
	}
	srand(time(0));
	rand();
	c = rand() % 2;
	switch (c) {
	case  0:printf("�R���s���[�^�̓O�[�ł�\n"); break;
	case  1:printf("�R���s���[�^�̓`���L�ł�\n"); break;
	case  2:printf("�R���s���[�^�̓p�[�ł�\n"); break;
	}
	switch (((p-1)-c+3)%3) {
	case  2:printf("�v���C���[�̏����ł�\n"); break;
	case  0:printf("�������ł�\n"); break;
	case  1:printf("�R���s���[�^�̏����ł�\n"); break;
	}
}
	