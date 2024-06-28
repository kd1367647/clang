#include<stdio.h>
#include<stdlib.h>
#include<time.h>
enum BitState
{
	Base=0,			//00000000 通常状態
	Poison=1<<0,	//00000001 毒状態
	Sleep=1<<1,		//00000010 眠り状態
	Paralysis=1<<2,	//00000100 まひ状態
	Burn=1<<3,		//00001000 やけど状態
	AtkUp=1<<4,		//00010000 攻撃力アップ状態
	AtkDown=1<<5	//00100000 攻撃力ダウン状態
};

typedef unsigned int UINT;
typedef struct
{
	char name[20];
	int hp;
	int mp;
	int def;
	UINT Mystate;
}Chara;
typedef struct
{
	char name[20];
	int hp;
	int atk;
	int def;
	UINT state;
}Mob;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
int DisplayMenu(void);
main()
{
	////状態を管理する変数Mystateを宣言してBaseで(0)初期化
	//UINT Mystate = Base;
	//ChangeFlag(&Mystate);
	//DisplayStatus(Mystate);
	//ClearFlag(&Mystate);
	//DisplayStatus(Mystate);
	//				name      hp  mp atk  def MyState
	Chara chara = { "主人公",2000,200,100,50,Base };
	//				name  hp  atk def state	  
	Mob mob[3] = { {"敵A",100,50,20,Base},
				 {"敵B"1000,100,40,Base},
				 {"敵C",5000,500,100,Base} };
	srand(time(0));
} 
int DisplayMenu(void)
{
	printf("コマンド?\n");
	printf("1:たたかう\n 2:ぼうぎょ\n");
	ch = getch();
}
void DisplayStatus(UINT s)
{
	printf("****現在の状態****\n");
	if (s & Poison)
	{
		printf("毒\n");
	}
	if (s & Sleep)
	{
		printf("睡眠\n");
	}
	if (s & Paralysis)
	{
		printf("まひ\n");
	}
	if (s & Burn)
	{
		printf("やけど\n");
	}
	if (s & AtkUp)
	{
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown)
	{
		printf("攻撃力ダウン\n");
	}
	printf("******************\n");
}
void ChangeFlag(UINT* s)
{
	int a;
	while (1) {
		printf("どの状態にしますか\n");
		printf("1:毒 2:睡眠 3:まひ 4:やけど 5:攻撃アップ 6:攻撃ダウン 0:入力終了>");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1: *s |= Poison;
			break;
		case 2: *s |= Sleep;
			break;
		case 3: *s |= Paralysis;
			break;
		case 4: *s |= Burn;
			break;
		case 5: *s |= AtkUp;
			break;
		case 6: *s |= AtkDown;
			break;
		default:
			break;
		}
	}
	
	
}
void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		DisplayStatus(*s);
		printf("どの状態を回復しますか\n");
		printf("1:毒 2:睡眠 3:まひ 4:やけど 5:攻撃アップ 6:攻撃ダウン 7:状態解除 0:入力終了>");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1: *s &= ~Poison;
			break;
		case 2: *s &= ~Sleep;
			break;
		case 3: *s &= ~Paralysis;
			break;
		case 4: *s &= ~Burn;
			break;
		case 5: *s &= ~AtkUp;
			break;
		case 6: *s &= ~AtkDown;
			break;
		case 7:*s = Base;
			break;
		default:
			break;
		}
	}
}

