#include<stdio.h>
int strcnt(char* p);
main()
{
	char buf[256];
	int mojisu;
	printf("•¶Žš—ñ?;");
	gets(buf);
	mojisu = strcnt(buf);
	printf("“ü—Í‚³‚ê‚½•¶Žš—ñ‚Í%d•¶Žš‚Å‚·\n", mojisu);
}

int strcnt(char* p)
{
	int cnt;
	for (cnt = 0; *p != '\0';cnt++, p++);
	return(cnt);
}