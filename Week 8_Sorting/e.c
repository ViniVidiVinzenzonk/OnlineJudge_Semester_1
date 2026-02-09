//Pritt Pritt - Prob E
#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int*b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *arr, int low, int high){
	int pivot = arr[high];
	int i = low-1;
	int j;
	for(j= low; j<high; j++){
		if(arr[j]<pivot){
			i++;
			swap(&arr[j], &arr[i]);
		}
	}
	swap(&arr[high], &arr[i+1]);
	return i+1;
}

void quickSor(int *arr, int low, int high){
	int pi;
	if(low<high){
		pi = partition(arr,low, high);
		quickSor(arr, low, pi-1);
		quickSor(arr, pi+1, high);
	}
}

int binarySearch(int *arr, int x, int low, int high){
	while(low<=high){
		int mid = low + (high-low)/2;
		
		if(arr[mid]==x){
			return mid+1;
		}else if(arr[mid]<x){
			low = mid+1;
		}else if(arr[mid]>x){
			high = mid-1;
		}
	}
	return -1;
}

int main(void){
	int N, i;
	if(scanf("%d", &N)!=1) return 0;
	
	int heights[N];
	for(i=0; i<N; i++){
		if(scanf("%d", &heights[i])!=1) return 0;
	}
		
	quickSor(heights, 0, N-1);
	int Q;
    scanf("%d", &Q); getchar();
    for (i = 0; i < Q; i++) {
        int want;
        scanf("%d", &want);
        
        if (want > 200000 || want < 0) {
            printf("-1\n");
        } else {
        	int found = binarySearch(heights, want, 0, N-1);
        	printf("%d\n", found);
        }
    }

    return 0;
}




