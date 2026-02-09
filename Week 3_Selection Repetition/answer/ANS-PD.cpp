#include <stdio.h>

int main(void){
	long long T, A, B, C;
	scanf("%lld", &T); getchar();
	
	for(int i =0; i<T; i++){
		scanf("%lld %lld %lld", &A, &B, &C); getchar();
		
		printf("Case #%d: ", i+1);
		long long hasil = (A*B)/100;
		
		if(hasil>C){
			printf("%lld\n", C);
		} else printf("%lld\n", hasil);
	}
	return 0;
}

