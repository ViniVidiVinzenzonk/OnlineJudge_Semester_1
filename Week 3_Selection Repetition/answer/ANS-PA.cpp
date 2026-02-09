#include <stdio.h>

int main(void){
	int a, b, c, counter = 0;
	scanf("%d %d %d", &a, &b, &c);
	getchar();
	while(true){
		if(a==b && b==c){
			printf("%d\n", counter);
			break;
		}
		a++;
		b--;
		//antara masukkin counter++ ato k-y
		counter++;
		if(a==b && b==c){
			printf("%d\n", counter);
			break;
		}
		else{
		printf("-1\n");
		break;
		} 
	}
}
