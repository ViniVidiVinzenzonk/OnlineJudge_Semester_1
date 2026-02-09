#include <stdio.h>
//cara selisih
int main(void){
	int x,y,k, counter = 0;
	scanf("%d %d %d", &x, &y, &k); getchar();
	//x naik, y turun, k tetap
	if(k-x == y-k){
		printf("%d\n", k-x);
	}
	else printf("-1");
	return 0;
}
