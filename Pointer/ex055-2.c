#include<stdio.h>

#define B_SIZE  4  //�z��b�̃T�C�Y
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4 };
	int* p_a,a_g,i;
	float* p_b,b_g;

	//sizeof�̗��K
	for (a_g = 0, p_a = a, i=0;i <  sizeof(int);i++,p_a++) {
		a_g += *p_a;
	}
	printf("�z��a ���v=%7d  ����=%6.3f\n", a_g, (float)a_g / sizeof(int));

	//difine�̗��K
	for (b_g = 0, p_b = b, i = 0; i < B_SIZE; i++, p_b++) {
		b_g += *p_b;
	}
	printf("�z��b ���v=%7.3f  ����=%6.3f\n", b_g,b_g/B_SIZE) ;


}