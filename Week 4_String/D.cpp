#include <stdio.h>
#include <string.h>
//kalo recursive
//void x(char *y){
//	if(*y=='\0') return;
//	x(y+1);
//	printf("%c", x[0]);
//}

int main(void){
	int x;
	char a[1001];
	scanf("%d", &x); getchar();
	
	for(int i = 0; i<x; i++){
		scanf("%[^\n]", a); getchar();
		printf("Case #%d : ",i+1);
		
		for(int j=strlen(a) - 1; j>=0; j--){
			printf("%c", a[j]);
		} 
		printf("\n");
	}
	return 0;
}
