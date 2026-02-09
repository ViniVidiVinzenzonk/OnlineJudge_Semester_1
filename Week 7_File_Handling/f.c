//ICE - Prob f
#include <stdio.h>
#include <stdlib.h>
FILE *fp;

int main(void){
	int t, n, i, j;
	int tot = 0;
	fp = fopen("testdata.in", "r");
	if(fscanf(fp, "%d", &t)!=1) return 1;
	for(i=0; i<t; i++){
		if(fscanf(fp, "%d", &n)!=1) return 1;
		
		tot = 0;
		int num[n];
		for(j=0; j<n; j++){
			if(fscanf(fp, "%d", &num[j])!=1) return 1;
			tot = tot + num[j];
		}
		
		long long area = (long long)tot*4;
		long long perimeter = (long long)n*4 + (num[0]*2) + (num[n-1]*2);
		
		for(j=0; j<n-1; j++){
			int diff = abs(num[j] - num[j+1]); // Selisih tinggi
			perimeter += diff * 2;
		} 
		printf("Case #%d: %lld %lld\n", i+1, perimeter, area);
	}
	return 0;
}




