#include <stdio.h>

//buat nentuin parent dari n = (n-1)/2
//buat nentuin left = n*2 +1 // 2^(i+1)
//cari leaf nya dulu, baru rekursif kan

void explore(int tree[], int n, int idx, int current){
	if(idx >= n){
		printf("%d\n", current);
		return ;
	}
	int left = idx*2 +1;
	int right = idx*2 +2;

	explore(tree, n, left, current+ tree[left]);
	explore(tree, n, right, current+ tree[right]);
}

int main(void){
	int t;
	scanf("%d", &t); getchar();
	
	for(int i=0; i<t; i++){
		int tree[100];
		int n;
		scanf("%d", &n); getchar();
		
		for(int j=0; j<n; j++){
			scanf("%d", &tree[j]); getchar();
		}
		printf("Case #%d: ",i+1);
		explore(tree, n, 0, tree[0]);
		
	}
	
	return 0;
}
