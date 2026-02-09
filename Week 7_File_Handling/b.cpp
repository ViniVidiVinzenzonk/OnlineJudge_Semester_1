#include <stdio.h>
#include <string.h>

FILE *fp;

struct list{
	char name[100];
	char plant[100];
};

struct list lists[100];
int t;

void readFile(int n){
	int i=0;
	fp = fopen("testdata.in", "r");
	for(i=0; i<n; i++){
		char name[100] = {0};
		char plant[100] = {0};
		fscanf("testdata.in", "%s#%s", name, plant); getchar();
		strcpy(lists[i].name, name);
		strcpy(lists[i].plant, plant);
	}
	fclose(fp);
}
