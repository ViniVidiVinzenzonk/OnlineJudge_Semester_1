#include <stdio.h>

int main(void){
	int N, A[1000], B[1000];
	scanf("%d", &N); getchar();
	
	for(int i=0; i<N; i++){
		scanf("%d", &A[i]); getchar();//yang ini jadi indexnya
	}
	
	for(int i=0; i<N; i++){//yang ini jadi angkanya yang mau dimasukkin ke indexnya
		scanf("%d", &B[A[i]]);getchar();
	}
	
	for(int i=0; i<N; i++){//yang ini buat nampung angka di index
		printf("%d", B[i]);
		if(i != N-1) printf(" "); //buat kasi spasi //kalo bukan yang terakhir, kasih spasi
	}
	printf("\n");
	
	return 0;
}
