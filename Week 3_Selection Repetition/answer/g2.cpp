#include <stdio.h>

int main(void){
	
	long long T, N[1001], X;
	scanf("%lld", &T);

	for(int i=0; i<T; i++){
		scanf("%lld %lld", &N[i], &N[i+1]);getchar();
		
		long long tengah = N[i]/2;
		long long hasilTengahDepan = (N[i] + N[i+1])/2;
		long long hasilTengahBelakang = (N[i] + N[i+1])/2;
		long long hasil = (hasilTengahDepan>hasilTengahBelakang) ? hasilTengahBelakang : hasilTengahDepan;
	printf("Case #%d: %lld\n", i+1, hasil);
}

}
