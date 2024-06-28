#include<stdio.h>
#define NIN 5
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day data;
	char blood[5];
};

main()
{
	struct profile data[NIN] = {
		{"AAAA",2000,2,28,"A"},
		{"BBBB",2000,3,31,"A"},
		{"CCCC",2000,2,13,"AB"},
		{"DDDD",2000,5,16,"AB"},
		{"EEEE",2000,2,9,"B"}
	};
	struct profile* p;
	int i;

	for (p=data, i = 0; i < NIN; i++, p++) {
		if (p->data.tuki == 2) {
			printf("%s--- %02d ”N %02d ŒŽ %02d “ú¶ ŒŒ‰tŒ^-%sŒ^\n"
				, p->name, p->data.nen, p->data.tuki, p->data.hi, p->blood);
		}
	}
}