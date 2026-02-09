#include <stdio.h>
#include <string.h>
#define max 100
char f[max][max];

int w;
void flood(char f[max][max], int n, int m, int idx_row, int idx_col){
	
	// pertama ngecek dulu, dalam batas apa engga
	if(idx_row>=n || idx_row<0 || idx_col>=m || idx_col<0) return;
	
	// kedua ngecek lagi, lantainya masih kering apa engga
	// kalo udah basah, yaudah jangan dibasahin
	if(f[idx_row][idx_col]!='.'){
		return;
	}
	
	//ketiga kita basahin lantainya
	w++;
	f[idx_row][idx_col] = '#';
	
	flood(f, n, m, idx_row+1, idx_col);
	flood(f, n, m, idx_row-1, idx_col);
	flood(f, n, m, idx_row, idx_col+1);
	flood(f, n, m, idx_row, idx_col-1);
}

int main(void){
	int t, n, m;
	if (scanf("%d", &t) != 1) return 1;
	int i=0;
	for(i=0; i<t; i++){
		if (scanf("%d %d", &n, &m) != 2) return 1;
		
		int j=0, k=0;
		int idx_row=0, idx_col=0;
		for(j=0; j<n; j++){
			for(k=0; k<m; k++){
				if (scanf(" %c", &f[j][k]) != 1) return 1; 
				if(f[j][k]=='S'){
					idx_row = j;
					idx_col = k;
				}	
			}
		}
		
		w=0;
		int drow[] = {-1, 1, 0, 0};
		int dcol[] = {0, 0, -1, 1};
		int p=0;
		for(p=0; p<4; p++){
			int next_row = idx_row + drow[p];
			int next_col = idx_col + dcol[p];
			flood(f, n, m, next_row, next_col);	
		}
		
		printf("Case #%d: %d\n", i+1, w);
	}
	return 0;
}
