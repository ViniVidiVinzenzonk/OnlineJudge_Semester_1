#include <stdio.h>

//buat nentuin parent dari n = (n-1)/2
//buat nentuin left = n*2 +1 // 2^(i+1)
//cari leaf nya dulu, baru rekursif kan

void explore(int tree[], int n, int idx, int current){
	if(idx >= n){
		return;
	}
	int current_value = tree[idx];
	int new_sum = current + current_value;
	
	int left = idx*2 +1;
	int right = idx*2 +2;

	if(left >=n && right>=n){
		printf("%d\n", new_sum);
		return;
	}
	
	if(left<n){
		explore(tree, n, left, new_sum);
	}
	
	if(right<n){
		explore(tree, n, right, new_sum);
	}
	
//	explore(tree, n, left, current+ tree[left]);
//	explore(tree, n, right, current+ tree[right]);
}

int main(void){
	int t;
	scanf("%d", &t); getchar();
	int i=0;
	for(i=0; i<t; i++){
		int tree[100];
		int n;
		scanf("%d", &n); getchar();
		
		int j=0;
		for(j=0; j<n; j++){
			scanf("%d", &tree[j]); getchar();
		}
		printf("Case #%d:\n",i+1);
		
		if(n>0){
			explore(tree, n, 0, 0);
		} else{
			printf("\n");
		}
	}
	printf("\n");
	
	return 0;
}
