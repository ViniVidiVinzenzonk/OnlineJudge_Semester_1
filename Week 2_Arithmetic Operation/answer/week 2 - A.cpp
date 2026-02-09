#include <stdio.h>

int main(void){
	int a[3],b[3];
	for(int i=0; i<3; i++){
		scanf("%d + %d =", &a[i], &b[i]); getchar();
	}
	
	for(int i=0; i<3; i++){
		printf("%d\n", a[i]+b[i]);
	}
}
