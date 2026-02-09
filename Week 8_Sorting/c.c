//Introduction To Computer Visioon - Prob C
#include <stdio.h>

FILE *fp;
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *arr, int low, int high){
	int pivot = arr[high];
	int i = low-1;
	int j;
	for(j=low; j<high; j++){
		if(arr[j]<pivot){
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
		swap(&arr[high], &arr[i+1]);
		return i+1;
}

void quickSort(int *arr, int low, int high){
	int pi;
	if(low<high){
		pi = partition(arr, low, high);
		quickSort(arr, low, pi-1);
		quickSort(arr, pi+1, high);
	}
}

int main(void){
	fp = fopen("testdata.in", "r");
	int i, a, y ,z;
	fscanf(fp, "%d", &a);
	for(i=0; i<a; i++){
		int idx=0;
		int j, k;
		fscanf(fp, "%d %d", &y, &z);
		int n = y*z;
		int arr[n];
		
		for(j=0; j<y; j++){
			for(k=0; k<z; k++){
				fscanf(fp, "%d", &arr[idx++]);
			}
		}
		
		quickSort(arr,0, n-1);
		if(n%2==0){ //kalo jumlah angka genap
			printf("Case #%d: %d\n", i+1, (arr[n/2] + arr[n/2-1]+1)/2);	
		}else printf("Case #%d: %d\n", i+1, arr[n/2]); //jumlah angka ganjil
	}
	
	fclose(fp);
	
	return 0;
}
