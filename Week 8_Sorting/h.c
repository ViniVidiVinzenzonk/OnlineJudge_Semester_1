// Free Holiday Trip Lottery - Prob H
#include <stdio.h>

void merge(int *arr, int l, int m, int r){
	int n1  =m-l+1;
	int n2 = r-m;
	int L[n1], R[n2];
	int i, j, k;
	for(i=0; i<n1; i++) L[i] = arr[l+i];
	for(j=0; j<n2; j++) R[j] = arr[j+m+1];
	
	i=0; j=0; k=l;
	while(i<n1 && j<n2){
		if(L[i]<=R[j]){
			arr[k++] = L[i++];
		}else arr[k++] = R[j++];
	}
	
	while(i<n1) arr[k++] = L[i++];
	while(j<n2) arr[k++] = R[j++];
}

void mergeSort(int *arr, int l, int r){
	if(l<r){
		int m = l+ (r-l)/2;
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}

int main(void){
	int n, i, j;
	if(scanf("%d", &n)!=1) return 1;
	int O[n], E[n];
	int idxo=0; int idxe=0;
	for(i=0; i<n; i++){
		int temp=0;
		if(scanf("%d", &temp)!=1) return 1;
		if(temp%2!=0){
			O[idxo++] = temp;	
		}else{
			E[idxe++] = temp;
		}
	}
	
	if(idxo>0) mergeSort(O, 0, idxo-1);
	if(idxe>0) mergeSort(E, 0, idxe-1);
	
	int q=0;
	if(scanf("%d", &q)!=1) return 1;
	for(i=0; i<q; i++){
		int m=0; j=0; int k=0;
		if(scanf("%d", &m)!=1) return 1;
				
		//ODD
		int left_o=0;
		int right_o = idxo-1;
		long long counto=0;
		while(left_o <right_o){
			if(O[ left_o ] + O[ right_o ]>=m){
				counto += (long long)(right_o - left_o);
				right_o--;
			}else{
				left_o++;
			}
		}
		
		//EVEN		
		int left_e=0;
		int right_e = idxe-1;
		long long counte=0;
		while(left_e<right_e){
			if(E[left_e]+E[right_e]>=m){
				counte +=(long long)(right_e - left_e);
				right_e--;
			}else left_e++;
		}
		printf("Case #%d: %lld %lld\n", i+1, counto, counte);
	}
	return 0;
}
