#include <stdio.h>

int main(void){
	
	long long T, N;
	scanf("%lld", &T); getchar();

	for(int i=0; i<T; i++){
		long long X[1001] = {}, selisih[1001] = {};
		scanf("%lld", &N); getchar();
		
		for(int j=0; j<N; j++){ //input array
			scanf("%lld", &X[j]); getchar();
		}
		
		if(N==1){ //jikalau N nya itu 1
			printf("Case #%d: %d\n",i+1, X[0]);
			continue;
		}
		
		long long temp=0;
		
		//hitung selisih pertama buat dapetin selisih awal
		int local_selisih = (X[0] > X[1]) ? X[0] - X[1] : X[1] - X[0];
		
		for(int j=0; j<N-1; j++){ //ngecek selisih
			if(X[j]>=X[j+1]){
				selisih[j] = X[j] - X[j+1];
			}
			else selisih[j] = X[j+1] - X[j];

			//kalo lebih kecil, store yang lebih kecil
			if(selisih[j]<local_selisih){
				local_selisih = selisih[j];
			}
			 
			//printf("Selisih pertama [%d]: %d\n", j, selisih[j]);
			//printf("Local Selisih: %d\n", local_selisih);
		}
		
//		
//		for(int j=0; j<N; j++){//secara linear
//			for(int k=0; k<N-j; k++){//secara linear tapi ga semua
//				if(selisih[k]>=selisih[k+1]){
//					temp = selisih[k];
//					selisih[k] = selisih[k+1];
//					selisih[k+1] = temp; 
//				}
//				printf("Selisih kedua[%d]: %d\n", k, selisih[k]);
//			}
//		}
		
		printf("Case #%d: %d\n",i+1, local_selisih);
	}
}



