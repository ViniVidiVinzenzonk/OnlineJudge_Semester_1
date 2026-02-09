//Sorting - Prob F
#include <stdio.h>
#include <stdlib.h>
void merge(int *arr, int l, int m, int r){
	int n1 = m-l+1;
	int n2 = r-m;
	int L[n1], R[n2];
	int i, j;
	
	for(i=0; i<n1; i++) L[i] = arr[i+l];
	for(j=0; j<n2; j++) R[j] = arr[j+m+1];
	
	i=0; j=0;
	int k=l;
	while(i<n1 && j<n2){
		if(L[i]<R[j]){
			arr[k++] = L[i++];
		}else arr[k++] = R[j++];
	}
	
	while(i<n1) arr[k++] = L[i++];
	while(j<n2) arr[k++] = R[j++];
}

void mergeSort(int *arr, int l, int r){
	int m;
	if(l<r){
		m = (l+r)/2;
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}


int main(void){
	int i, t;
	if(scanf("%d", &t)!=1) return 0;
	int num[t];
	for(i=0; i<t; i++){
		if(scanf("%d", &num[i])!=1) return 0;
	}
	
	mergeSort(num, 0, t-1);
	
	int maxDiff = -1;
	for(i=0; i<t-1; i++){
		int diff = num[i+1] - num[i];
		
		if(diff >maxDiff){
			maxDiff = diff;
		}
	}
	
	int firstPrint = 0;
	for(i=0; i<t-1; i++){
		int diff = abs(num[i+1] - num[i]);
		
		if(diff == maxDiff){
			if(firstPrint) printf(" ");	//kalo ada lebih dari one pair
			printf("%d %d", num[i], num[i+1]);
			firstPrint=1;
		}
	}
	printf("\n");
	
	return 0;
}
