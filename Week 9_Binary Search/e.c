//Binary Serach? - Prob E
#include <stdio.h>

long long calculate_S(long long n){
	if(n<=0) return 0;
	unsigned long long product = (unsigned long long)n* (n+1)* (2*n +1);
	return product/6;
}

//Binary Lower Bound
long long binarySearch(long long M){
	long long low = 0;
	long long high = 2000000;
	long long result_N = high;
	
	while(low<=high){
		long long m = low+(high-low)/2;
		unsigned long long sum_at_m = calculate_S(m);
		
		if(sum_at_m>=M){
			result_N = m;
			high = m-1;
		}else low = m+1;
	}
	return result_N;
}

int main(void){
	int t, i, j;
	scanf("%d", &t); getchar();
	for(i=0; i<t; i++){
		long long m;
		scanf("%lld", &m); getchar();
		
		long long hasil = binarySearch(m);
		printf("Case #%d: %lld\n", i+1,  hasil);
	}
	return 0;
}


