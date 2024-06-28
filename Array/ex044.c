#include<stdio.h>
main()
{
	char moji1[100], moji2[100],w[100];
	int i;
	
	//入力
	printf("文字列１を入力:");
	scanf("%s", &moji1);
	printf("文字列２を入力:");
	scanf("%s", &moji2);
	printf("moji1=%s moji2=%s\n", moji1, moji2);

	//w配列へmoji1をコピー
	for (i = 0; moji1[i] != '\0';i++) {
		w[i] = moji1[i];
	}

	//\0を入れる
	w[i] = '\0';

	for (i = 0; moji2[i] != '\0'; i++) {
		moji1[i] = moji2[i];
	}

	moji1[i] = '\0';

	for (i = 0; w[i] != '\0'; i++) {
		moji2[i] = w[i];
	}

	moji2[i] = '\0';
	printf("入れ替えると\n");
	printf("moji1=%s moji2=%s\n", moji1, moji2);
}