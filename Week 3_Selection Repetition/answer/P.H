#include <stdio.h>

int main(void){
	
	long long T, N[1001], X;
	scanf("%lld", &T);

	for(int i=0; i<T; i++){
		scanf("%lld", &N[i]);
	}
	
	long long tengah = T/2;
	long long hasilTengahDepan = (N[T] + N[T-1])/2;
	long long hasilTengahBelakang = (N[T] + N[T+1])/2;
	
	long long hasil = (hasilTengahDepan>hasilTengahBelakang) ? hasilTengahBelakang : hasilTengahDepan;
	
	printf("Case #%d: ", hasil);
}
