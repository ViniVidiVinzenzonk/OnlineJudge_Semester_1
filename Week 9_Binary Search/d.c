//Cari Maksimum Tapi bukan dari INdeks 0 - Prob D
#include <stdio.h>
#define max 5005

int main(void){
	long long n, q, i, j;
	if(scanf("%lld", &n)!=1) return 1;
	long long m[max], hasil[max];
	hasil[0]=0;
	for(i=0; i<n; i++){
		if(scanf("%lld", &m[i])!=1) return 1;
	}
	
	if(scanf("%lld", &q)!=1) return 1;
	for(i=0; i<q; i++){
		long long temp=0;
		if(scanf("%lld", &temp)!=1) return 1;
		
		//Sliding Window
		int left = 0;
		long long current_sum=0;
		int max_len=0;
		
		//dari 0 sampai n-1
		int right;
		for(right=0; right<n; right++){
			//memperluas window ke kanan
			current_sum += m[right];
			
			//kalau current_sum udah lebih
			// kita sliding kirinya ke kanan/ menyempit
			while(current_sum>temp){
				current_sum -= m[left];
				left++;
			}
			
			//catet panjang
			int current_len = right - left+1;
			if(current_len>max_len){
				max_len = current_len;
			}
		}
		int result;
		if(max_len>0 || n==0){
			 result = max_len;
		}else{
			 result = -1;
		}

		printf("Case #%d: %d\n", i+1, result);
	}
	return 0;
}
