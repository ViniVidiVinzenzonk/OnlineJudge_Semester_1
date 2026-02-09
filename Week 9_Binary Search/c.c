// As Close As You Can - Prob C 
#include <stdio.h>

long long prefix[100005];

int main(void){
	int n, i, q;
	scanf("%d", &n);
	
	prefix[0] = 0;
	
	for(i = 1; i <= n; i++){
		long long curr;
		scanf("%lld", &curr);
		prefix[i] = prefix[i-1] + curr;
	}
	
	scanf("%d", &q);
	
	for(i = 0; i < q; i++){
		long long M;
		scanf("%lld", &M);
		
		int low = 1;
		int high = n;
		int answer = -1;
		
		while(low <= high){
			int mid = low + (high - low) / 2;
			
			//Higher Bound Binary Search
			if(prefix[mid] <= M){
				answer = mid;    // This is valid, try to find larger
				low = mid + 1;   // Search right half
			} else {
				high = mid - 1;  // prefix[mid] > M, search left half
			}
		}
		
		printf("Case #%d: %d\n", i + 1, answer);
	}
	
	return 0;
}


