// Plant Sorting - Prob I
#include <stdio.h>
#include <string.h>
FILE *fp;
struct p{
	char nam[50];
	int no;
};
struct p p1[1001];

void merge(struct p *arr, int l, int m, int r){
	int n1 = m-l+1;
	int n2 = r-m;
	struct p L[n1], R[n2];
	
	int i=0; int j=0; int k;
	for(i=0; i<n1; i++) L[i] = arr[i+l];
	for(j=0; j<n2; j++) R[j] = arr[j+1+m];
	
	i=0; j=0; k=l;
	while(i<n1 && j<n2){
		if(strcmp(L[i].nam,R[j].nam)<=0){
			arr[k++] = L[i++];
		}else arr[k++] = R[j++];
	}
	
	while(i<n1) arr[k++] = L[i++];
	while(j<n2) arr[k++] = R[j++];
}

void mergeSort(struct p *arr, int l, int r){
	if(l<r){
		int m = l+(r-l)/2;
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);	
		merge(arr, l, m, r);
	}
}

int main(void){
	fp = fopen("testdata.in", "r");
	int n;
	if(fscanf(fp, "%d", &n)!=1) return 1;
	int i;
	for(i=0; i<n; i++){
		if(fscanf(fp, "%d#%[^\n]", &p1[i].no, p1[i].nam)!=2) return 1;
	}
	fclose(fp);
	
	if(n>0) mergeSort(p1, 0, n-1);
	for(i=0; i<n; i++){
		printf("%d %s\n", p1[i].no, p1[i].nam);
	}
	return 0;
}
