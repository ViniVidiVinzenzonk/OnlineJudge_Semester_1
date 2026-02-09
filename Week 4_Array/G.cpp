#include <stdio.h>
#include <stdbool.h>
//logic: nimpen semuanya dulu ke array, terus ngecek satu demi satu ke row, ngecek satu demi satu ke array. Kalo ada yang sama (1 aja sama), langsung printf("Nay") dan stop ngecek.
int main(void){
	int t;
	scanf("%d", &t); getchar();
	
	int a[101][101];	
		for(int j=0; j<t; j++){//buat jumlah baris
			for(int k=0; k<t; k++){//buat jumlah kolom
		 		scanf("%d", &a[j][k]); getchar();
			}
		}
		
		/* CARA 1 TAPI MASIH WRONG ANSWER SOALNYA NGECEKNYA CUMAN 2 angka berdekatan oke gajadi ini caranya salah
		for(int j=0; j<t-1; j++){
			for(int k=0; k<t-1; k++){
				if(a[j][k+1]!='\0' && a[j+1][k]!='\0'){
					int l=0;
					if(l==k) continue;
					if(a[j][l] ==a[j][k]){
						printf("Nay\n");
						return 0;
					}else if(a[l][k] ==a[j][k]){
						printf("Nay\n");
						return 0;
					}	
					l++;
				}
			}
		}
		printf("Yay\n");*/
		
		//check row
		for(int i=0; i<t; i++){
			bool seen[101] = {false};
			
			for(int j=0; j<t; j++){
				int num = a[i][j];
				if(seen[num]){
					printf("Nay\n");
					return 0;
				}
				seen[a[i][j]] = true;
			}
		}
		
		//check column
		for(int i=0; i<t; i++){
			bool seen[101] = {false};
			
			for(int j=0; j<t; j++){
				int num = a[j][i];
				if(seen[num]){
					printf("Nay\n");
					return 0;
				}
				seen[a[i][j]] =true;
			}
		}
		
		printf("Yay\n");
	
	return 0;
}
