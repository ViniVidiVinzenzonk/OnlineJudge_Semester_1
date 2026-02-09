#include <stdio.h>
//cara selisih
int main(void){
	int x,y,k, counter = 0;
	scanf("%d %d %d", &x, &y, &k); getchar();
	
	int dx = k-x;
	int dy = y-k;
	//bisa jadi selisihnya sama tapi mines
	if(dx!= dy || dx<0){
		printf("-1\n");
	}
	else printf("%d\n", dx);
	
	return 0;
}
