//LIGHTNING - Prob G
#include <stdio.h>
FILE *fp;

int main(void){
	int t, i, a, b, n, j;
	fp = fopen("testdata.in", "r");
	if(fscanf(fp,"%d", &t)!=1) return 0;
	char sound[10005];
	
	for(i=0; i<t; i++){
		if(fscanf(fp,"%d %d %d", &n, &a, &b)!=3) return 0;
		
		if(fscanf(fp, "%s", sound)!=1) return 0;
		
		int counter=0;
		int light=0;
		for(j=0; j<n; j++){
			if(sound[j] == '1'){
				counter++;
			}else{
			if(counter>=a && counter<=b){
				light++;
			}
			counter=0; //jadi kalo suaranya udah berhenti dan ternyata bukan petir, dijadiin 0 counternya
			}
		}
	if(counter>=a && counter<=b){
		light++;
	}
	
	printf("Case #%d: %d\n", i+1, light);
}
return 0;
}








