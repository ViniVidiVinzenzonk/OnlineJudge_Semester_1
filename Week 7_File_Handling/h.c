// JOJO AND MMORPG - Prob h
#include <stdio.h>

void sort(long long arr[], int n){
	int i, j;
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				long long temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}


int main(void){
	int n, i, jumlah;
	long long y, x[101];
	
	if(scanf("%d", &n)!=1) return 1;
	for(i=0; i<n; i++){
		if(scanf("%lld", &x[i])!=1) return 1;
	}
	
	if(scanf("%lld", &y)!=1) return 1;
	
	sort(x, n);
	
	for(i=0; i<n; i++){
		if(y >= x[i]){
			y = y - x[i];
			jumlah++;
		}else break;
	}
	
	printf("%d\n", jumlah);
	
}


