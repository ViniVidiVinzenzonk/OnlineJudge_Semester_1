#include <stdio.h>

int main(void){
	
	long long T, N, X[1001], selisih[1001];
	scanf("%lld", &T); getchar();

	for(int i=0; i<T; i++){
		//kita perlu ngebersihin isi array dulu gasih
		scanf("%lld", &N); getchar();
		
		for(int j=0; j<N; j++){ //input array
			scanf("%lld", &X[j]); getchar();
		}
		
		long long temp=0;
		for(int j=0; j<N-1; j++){ //ngecek selisih
			if(X[j]>=X[j+1]){
				selisih[j] = X[j] - X[j+1];
			}
			else selisih[j] = X[j+1] - X[j];
			
			printf("Selisih pertama [%d]: %d\n", j, selisih[j]);
		}
		
		
		for(int j=0; j<N; j++){//secara linear
			for(int k=0; k<N-j; k++){//secara linear tapi ga semua
				if(selisih[k]>=selisih[k+1]){
					temp = selisih[k];
					selisih[k] = selisih[k+1];
					selisih[k+1] = temp; 
				}
				printf("Selisih kedua[%d]: %d\n", k, selisih[k]);
			}
		}
		
		printf("Case #%d: %lld\n",i+1, selisih[0]);
	}
}



