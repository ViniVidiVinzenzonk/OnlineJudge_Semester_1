#include <stdio.h>
#include <stdbool.h>
//pake 2d array buat nyimpen nomer kamarnya, soalnya kalo pake 1d array kan cuman bisa nyimpen 1 nomer (1~9), sedangkan disini kita bisa sampe 2*10^9 nomer, kemudian dilooping ngecek pake boolean, sama count;

int main(void){
	int N;
	long long A[5001];
	int counter =0;
	scanf("%d", &N); getchar();
	
	for(int i=0; i<N; i++){
		if(scanf("%lld", &A[i]) !=1) break; //biar lebih robust
	}
	
	//disorting
	for(int i=0; i<N; i++){
		for(int j=0; j<N-1; j++){
			if(A[j] < A[j+1]){
				long long temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
//			A[j+1] = A[j] > A[j+1] ? A[j] : A[j+1];
		}
	}
	
	//cari tahu yang ngga sama
	for(int i=0; i<N-1; i++){
		if(A[i]!=A[i+1]){
//			printf("A[%d] = %lld, A[%d] = %lld\n", i, A[i], i+1, A[i+1]);
			counter++;
		}
	}
	
//	
//	bool B[5001] = {false};
//	int counter=0;
//	for(int i=0; i<N; i++){
//		long long num = A[i];
//		if(B[num]== true){
//			continue;
//		}else if(B[num]==false){
//			B[num]=true;
//			counter++;
//		}
//		printf("Num: %d , B[num]: %d, Counter:%d\n", num,B[num], counter);
	
	printf("%d\n", counter+1);
	return 0;
}
