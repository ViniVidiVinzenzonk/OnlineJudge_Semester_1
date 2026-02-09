#include <stdio.h>

int main(void){
	/*int T, a, b, c, d, e, f;
	scanf("%d", &T);
	getchar();
	for(int i =0; i<T; i++){
		scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
		getchar();
		printf("\nCase #%d: ", i+1);
		for(int j=0; j<a; j++){
			printf("a");
		}
		for(int j=0; j<b; j++){
			printf("s");
		}
		for(int j=0; j<c; j++){
			printf("h");
		}
		for(int j=0; j<d; j++){
			printf("i");
		}
		for(int j=0; j<e; j++){
			printf("a");
		}
		for(int j=0; j<f; j++){
			printf("p");
		}
	}*/
	int t;
	char word[] = "ashiap";
	scanf("%d", &t);
	
	for(int i=0; i<t; i++){
		int rep;
		printf("Case #%d: ", i+1);
		
		for(int j=0; j< 6; j++){
			scanf("%d", &rep);
			getchar();

 			for(int k=0; k<rep ;k++){
				printf("%c", word[j]);
			}
		 }
		 printf("\n");
	 }		
}
