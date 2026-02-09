#include <stdio.h>

int main(void){
	int t, n, m;
	long long local_max=0, global_max=0;
	//n = jumlah anak
	//m = jumlah coklat per anak
	//setiap n anak memegang m cokelat
	//kalo ngga pake array, bisa degngan cara bisa langsung ditambah terus dan local_max
	scanf("%d", &t); getchar();
	for(int i=0; i<t; i++){
		scanf("%d %d", &n, &m); getchar();
		for(int j=0; j<n; j++){//looping jumlah anak
			local_max = 0;
			for(int k=0; k<m; k++){// looping jumlah coklat
		 		int weight;
				scanf("%d",&weight); getchar();
				local_max = (local_max >weight) ? local_max : weight; //kalo local_max lebih gede, maka akan dimasukkan ke local max, kalo weight lebih gede, akan dimasukkan ke local_max
		 	}
		 	global_max += local_max;
		}
		printf("Case #%d: %lld\n", i+1, total);
 }
	
	return 0;
}
