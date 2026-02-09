#include <stdio.h>
#include <string.h>
int main(void){
	int t,m;
	char word[1001], w1, w2;
	
	scanf("%d", &t); getchar();
	for(int i=1; i<=t; i++){
		
		//biar lebih robust lagi, tambahin 1000 ==> 1000 itu 100 character maks
		scanf("%1000[^\n]", word); getchar(); //getchar buat ngambil \n
		scanf("%d", &m); getchar();//_,,_
		
		for(int j=0; j<m; j++){
			scanf("%c %c", &w1, &w2); getchar();
			
			//ganti kata kata nya
			for(int k=0; word[k]; k++){ //biar bisa ngecek smeua kata
				if(word[k] == w1){
					word[k] = w2; //proses pergantian
				}
			}
		}
		
//		printf("%d\n", m);
		printf("Case #%d: %s\n", i,word);
	}
	return 0;
}
