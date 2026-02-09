// PLANTING TREES - Prob B
#include <stdio.h>
#include <string.h>

int main(void){
	int i, t, j, n;
	FILE *fp;
	const char *file = "testdata.in";
	fp = fopen(file, "r");
	fscanf(fp, "%d\n", &n);
	
	struct list{
		char name[41];
		char plant[41];
	};
	struct list lists[n];
	
	for(i=0; i<n; i++){
		if(fscanf(fp, "%[^#]#%[^\n]\n", lists[i].name, lists[i].plant)!=2){
			printf("a"); //placeholder doang
		};
	}
	
	fscanf(fp, "%d", &t);
	
	for(i=0; i<t; i++){
		int flag = 0;
		char naam[41] = {0};
		fscanf(fp, "%s", naam);
		
		for(j=0; j<n; j++){
			if(strcmp(naam, lists[j].name)==0){
				printf("Case #%d: %s\n", i+1, lists[j].plant);
				flag =1;
				break;
			}
		}
		
		if(flag==0){
			printf("Case #%d: N/A\n", i+1);
		}
	}
	
	fclose(fp);
	return 0;
}










