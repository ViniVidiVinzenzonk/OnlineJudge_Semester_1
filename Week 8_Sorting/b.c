// EXAMINATION - Prob B
#include <stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int *arr, int n){
	int i, j;
	for(i=0; i<n; i++){
		for(j=0; j<n-i-1; j++){
			if(arr[j+1]<arr[j]){
				swap(&arr[j+1], &arr[j]);
			}
		}
	}
}

int main(void){
	int T, N, X;
	int i,j ,k;
	if(scanf("%d", &T)!=1) printf("a");
	for(i=0; i<T; i++){
		if(scanf("%d %d", &N, &X)!=2) printf("a");
		int num[N];
		
		for(j=0;j<N; j++){
			if(scanf("%d", &num[j])!=1) printf("a");
		}
		
		bubbleSort(num, N);
		
		printf("Case #%d: ", i+1);
		int temp=0;
		int count=0;
		
		for(j=N-1; j>=0; j--){ //Cari Minimum
			if((temp + num[j])<=X){
				temp+= num[j];
				count++;
			}else{
				break;
			}
		}
		printf("%d ", count);
		
		temp=0;
		count=0;
		for(j=0; j<N; j++){ //Cari Maksimum
			if((temp + num[j])<=X){
				temp+= num[j];
				count++;
			} else{
				break;
			}
		}
		printf("%d\n", count);
	}
	
	return 0;
}
