#include <stdio.h>
//cara selisih
int main(void){
	int x,y,k, counter = 0;
	scanf("%d %d %d", &x, &y, &k);
	//x naik, y turun, k tetap
	while(x!=k && y!=k){
		x++;
		y--;
		counter++;
	}	
	
}
