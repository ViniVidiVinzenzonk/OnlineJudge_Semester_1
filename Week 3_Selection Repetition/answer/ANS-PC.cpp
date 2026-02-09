#include <stdio.h>

int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b, a%b);
}
/* gcd(35,15)
gcd(15, 35%15) = gcd(15,5) 
gcd(5, 15%5) = gcd(5,0)
a = 5 = result
*/

int main(void){
	int T, N, A[101][101], result;
	scanf("%d", &T);
	
	for(int i=0; i<T; i++){
		scanf("%d", &N);
		for(int j=0; j<N; j++){
			scanf("%d", &A[i][j]);
		}
	}
	//result =A[0][0];
	for(int i=0; i<T; i++){
		result = A[i][0];
		for(int j=0; j<N; j++){
			//printf("%d %d\n", A[i][j], A[i][j+1]);
			result = gcd(result, A[i][j+1]);//gabisa gini karena nanti resultnya pasti beda beda terus keubah terus
		}
		
		printf("Case #%d: %d\n", i+1, result);
	}
}
