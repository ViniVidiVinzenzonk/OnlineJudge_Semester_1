#include <stdio.h>
#include <stdbool.h>
//habis kita tambahin, kita sama denganin (kalo sama, simpen kedalem array cool dengan boolean value, biar kalo udah ==1, yaudah ngga bertambah jadi 2)
int main(void){
	int t, n;
	scanf("%d", &t); getchar();
	
	for(int i=1; i<=t; i++){
		scanf("%d", &n); getchar();
		int a[n]={0};
		for(int j=0; j<n; j++){
			scanf("%d", &a[j]); // discan dulu semua angkanya
		}
		getchar();

////		tambahin dulu
		int k=0, m=0;
		int plus[(n*(n-1))/2]={0}; //kayak logika orang berjabat tangan
		for(int j=0; j<n; j++){
			for(k=0; k<j; k++){ //kalo j nya 0, k gabakal bisa jalan, jadinya lanjut
				plus[m] = a[j]+a[k];
				printf("plus[%d] = %d, (a[%d] = %d) + (a[%d] = %d)\n", m, plus[m], j, a[j], k, a[k]);
				m++;
			}
		}

////		ngitung dalem array ada angka unique/ tdk berulang berapa
		int countCool=0;
		for(int j=0; j<n; j++){
			for(int l=0; l<m; l++){
				if(a[j]==plus[l]) {countCool++; printf("a[%d] = %d = plus[%d] = %d\n", j, a[j], l, plus[l]); break;}
			}
		}
		printf("Case #%d: %d\n",i, countCool);
	}
	return 0;
}
		
		
		
		
		
		
		
		
		
		
		
//		for(int j=0; j<n; j++){
//			for(int k=0; k<j; k++){
////				if(j==k) continue; //biar dia ngga nambahin ke index yg sama aka angkanya sendiri
//				int temp = a[j] + a[k]; //di-tambahin dulu secara linear
//		 
//				for(int l=0; l<n; l++){ //ngecek hasil tambah
//					if(temp==a[l] && cool[temp]==false){//ngecek dulu nih ada yg sama ato engga
//						cool[temp] = true;
//						countCool++;
////						break;
//					}
//				}
//			}
//		}
