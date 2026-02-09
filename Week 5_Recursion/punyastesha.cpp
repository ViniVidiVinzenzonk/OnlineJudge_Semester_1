#include <stdio.h>

int count = 0;

int function(int x){
	if (x == 0){
		return 1;
	} else if (x == 1){
		return 2;
	}else if (x%15==0){
		count++;
		return x*2;
	} else if (x%3==0){
		count++;
	} else if (x%5==0){
		return x*2;
	}
	
	return function(x-1) + x + function(x-2) + x-2;
}

int main(){
	
	int tc;
	scanf("%d", &tc);
	
	for (int i=0; i<tc; i++){
		int angka;
		scanf("%d", &angka);
		
		int hasil = function(angka);
		
		printf("Case #%d: %d %d\n", i+1, hasil, count);
		
		count = 0;
	}
	
	return 0;
}
