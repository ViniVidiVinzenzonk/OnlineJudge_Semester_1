#include <stdio.h>
//habis kita tambahin, kita sama denganin (kalo sama, simpen kedalem array cool dengan boolean value, biar kalo udah ==1, yaudah ngga bertambah jadi 2)
int main(void){
	int t, n;
	scanf("%d", &t); getchar();
	
	for(int i=1; i<=t; i++){
		int cool[402] = {0};
		scanf("%d", &n); getchar();
		int countCool=0;
		int a[201]={0};
		
		for(int j=0; j<n; j++){
			scanf("%d", &a[j]); // discan dulu semua angkanya
		}
		getchar();
		
		for(int j=0; j<n; j++){
			for(int k=0; k<n; k++){
				for(int l=0; l<n; l++){
					
					if(j==k || j==l || k==l) continue; //biar dia ngga nambahin ke index yg sama aka angkanya sendiri
					if(a[l] == a[j] + a[k]){
						if(cool[a[l]]==0){
							cool[a[l]]=1;
							countCool++;
							break;
						} 	
					}
				}
			}
		}
		printf("Case #%d: %d\n",i, countCool);
	}
	return 0;
}
