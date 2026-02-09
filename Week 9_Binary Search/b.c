// Position - Prob B
#include <stdio.h>

// Lower Bound Binary Search
int binarySearch(int*arr, int n, int key){
	int low = 0;
	int high = n-1;
	int idx_smallest=-1;
	while(low<=high){
		int mid = low+(high-low)/2;
		
		if(arr[mid]==key){
			idx_smallest = mid+1;
			//Karena lower bound, jadi kita cari yang di kiri
			// cari di kiri aka cari yang lebih kecil
			high = mid-1;
		}else if(arr[mid]<key){
			low = mid+1;	
		}else high = mid-1;
	}
	return idx_smallest;
}

int main(void){
	int n, m;
	if(scanf("%d %d", &n, &m)!=2) return 1; 
	int a1[n], a2[m];
	int i;
	for(i=0; i<n; i++){
		if(scanf("%d", &a1[i])!=1) return 1;
	}
	for(i=0; i<m; i++){
		if(scanf("%d", &a2[i])!=1) return 1;
	}
	for(i=0; i<m; i++){
		int hasil = binarySearch(a1, n, a2[i]);
		printf("%d\n", hasil);
	}
	return 0;
}


