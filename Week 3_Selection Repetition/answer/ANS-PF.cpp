#include <stdio.h>
int main(void){
	int  T;
	scanf("%d", &T); getchar();
	for(int k=0; k<T; k++){
		int n;
		scanf("%d", &n);
		for(int i=0; i<n; i++){//baris
    	//bikin spacenya
			for(int j=n-i -1; j>0; j--){
				printf(" ");}
		
			//bikin segitiganya
			for(int j=0; j< 2*i +1 ; j++){//isi baris
	  	// asal usul rumus 2i+1
	  	// baris 0, ada 1 asterisk
	 	 // baris 1, ada 3 asterisk
	  
			printf("*");}
		printf("\n");}
	}
return 0;
}
