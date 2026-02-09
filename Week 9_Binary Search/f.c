//MAximum Addition - Prob F
#include <stdio.h>

int main(void){
	int t, n, i, j;
	long long m;
	
	scanf("%d", &t);
	
	for(i = 0; i < t; i++){
		scanf("%d %lld", &n, &m);
		
		long long arr[n];
		for(j = 0; j < n; j++){
			scanf("%lld", &arr[j]);
		}
		
		// Try all possible segments and find the longest valid one
		int max_len = -1; // Initialize to -1 (no valid segment found)
		
		// Check all possible starting positions
		for(int start = 0; start < n; start++){
			long long sum = 0;
			
			// Check all possible ending positions from this start
			for(int end = start; end < n; end++){
				sum += arr[end]; // Add current element to sum
				
				// If sum is valid, update max length
				if(sum <= m){
					int current_len = end - start + 1;
					if(current_len > max_len){
						max_len = current_len;
					}
				} else {
					break;
				}
			}
		}
		
		printf("Case #%d: %d\n", i + 1, max_len);
	}
	
	return 0;
}

