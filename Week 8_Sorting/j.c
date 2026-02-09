// TOP VIEWER - Prob J
#include <stdio.h>
#include <string.h>
FILE *fp;
struct b{
	int view;
	char nam[1001];
	char art[1001];
};

struct b b1[101];
void merge(struct b* arr, int l, int m, int r){
	int n1 = m-l+1;
	int n2 = r-m;
	struct b L[n1], R[n2];
	
	int i, j, k;
	for(i=0; i<n1; i++) L[i] = arr[i+l]; 
	for(j=0; j<n2; j++) R[j] = arr[j+m+1];
	
	i=0;j =0; k=l;
	while(i<n1 && j<n2){
		if(L[i].view > R[j].view){
			arr[k++] = L[i++];
		}else if(L[i].view < R[j].view){
			arr[k++] = R[j++];
		}else{
			if(strcmp(L[i].nam, R[j].nam)<0){
				arr[k++] = L[i++];
			}else arr[k++] = R[j++];
		}
	} 
	
	while(i<n1) arr[k++] = L[i++];
	while(j<n2) arr[k++] = R[j++];
} 

void mergeSort(struct b* arr, int l, int r){
	if(l<r){
		int m = l + (r-l)/2;
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}

int main(void){
	fp = fopen("testdata.in", "r");
	int counter=0;
	while(fscanf(fp, "%[^#]#%[^#]#%d\n", b1[counter].nam, b1[counter].art, &b1[counter].view)==3){
		counter++; //itu diatas ada \n buat ngambil \n di testdata.in
	}
	fclose(fp);
	mergeSort(b1, 0, counter-1);
	int i=0;
	for(i=0; i<counter; i++){
		printf("%s by %s - %d\n", b1[i].nam, b1[i].art, b1[i].view);
	}
	return 0;
}
