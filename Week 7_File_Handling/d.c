// FILE - Prob D
#include <stdio.h>
#include <string.h>

FILE *fp;
struct word{
	char shortw[100];
	char longw[100];
};

int main(void){
	int t, i ,j, k;
	fp = fopen("testdata.in", "r");
	if(fscanf(fp, "%d\n", &t)!=1) return 0;
	
	struct word words[t];
	for(i=0; i<t; i++){
		if(fscanf(fp,"%[^#]#%[^\n]\n", words[i].shortw, words[i].longw) !=2) return 0;
	}
	
	int tc;
	if(fscanf(fp, "%d\n", &tc)!=1) return 0;
	
	for(i=0; i<tc; i++){ //tc ini kan kalimat, kita ngerjainnya per kalimat
		char sebelum_ganti[100][101];
		int counter=0;
		char sep;
		
		while(1==1){
			if(fscanf(fp, "%s%c", sebelum_ganti[counter],&sep)!=2) return 0;
			counter++;
			
			if(sep=='\n') break;
		}
		
		printf("Case #%d:\n", i+1);
		
		//print per kata
		for(j=0; j<counter; j++){
			int flag=0;
			
			for(k=0; k<t; k++){
				if(strcmp(sebelum_ganti[j], words[k].shortw)==0){
					printf("%s", words[k].longw);
					flag = 1;
					break;
				}
			}
		
		if(flag==0){
			printf("%s", sebelum_ganti[j]);
		}
		
		if(j<counter-1){
			printf(" "); //print spasi
		}
	}
		printf("\n");
	}
	
	fclose(fp);
	return 0;
}


