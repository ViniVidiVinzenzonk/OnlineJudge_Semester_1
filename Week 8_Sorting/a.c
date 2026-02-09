// Grid Of Letters - Prob A
#include <stdio.h>
#include <string.h>

void bubbleSort(char *arr, int col){ //kalo point an array, pasti langsung ke point nya ke second dimention
	int i, j;
	for(i=0; i<col; i++){
		for(j=0; j<col-i-1; j++){
			if(arr[j]>arr[j+1]){
				char temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void totalSort(char (*arr)[201], int row, int col){ //passes the whole array
	int i, j;
	char temp[201];
	for(i=0; i<row-1; i++){
		for(j=0; j<row-1-i; j++){
			if(strcmp(arr[j], arr[j+1])<0){ //ngebandingin langsung 1 row dengan 1or selanjutnya
				strcpy(temp, arr[j]);
				strcpy(arr[j], arr[j+1]);
				strcpy(arr[j+1], temp);
			}
		}
	}
}

int main(void){
	int row, col;
	if(scanf("%d %d", &row, &col)!=2) return 0;
	getchar();
	char alp[row][201];
	
	int i, j;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			if(scanf("%c", &alp[i][j])!=1);
		}
		alp[i][col] = '\0';
		getchar();
	}
	
	for(i=0; i<row; i++) bubbleSort(alp[i], col);
	totalSort(alp, row, col);
	for(i=0; i<row; i++) printf("%s\n", alp[i]);
	return 0;
}




