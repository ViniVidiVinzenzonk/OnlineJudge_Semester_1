#include <stdio.h>

#define MAX_SIZE 50

/*A matrix 1
 *B matrix 2
 *C matrix 3
 *N ukuran matrix
 */
void matrix_multiply(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int C[MAX_SIZE][MAX_SIZE], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {//baris
            C[i][j] = 0; 
            for (int k = 0; k < N; k++) { //kolom
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}


void read_matrix(int matrix[MAX_SIZE][MAX_SIZE], int N) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++){
        scanf("%d", &matrix[i][j]); getchar();
            }
        }
    }


void print_matrix(int matrix[MAX_SIZE][MAX_SIZE], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d", matrix[i][j]);
            // ngeprint space setelah elemen terakhir kecuali elemen terakhir di baris tsb
            if (j < N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int T;
    scanf("%d", &T); getchar();

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N); getchar();

        int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], C[MAX_SIZE][MAX_SIZE];
        int Temp[MAX_SIZE][MAX_SIZE], Result[MAX_SIZE][MAX_SIZE];

        // Lili's matrix
        read_matrix(A, N);
        // Bibi's matrix
        read_matrix(B, N);
        // Jojo's matrix
        read_matrix(C, N);

       //Temp = A * B (M1 * M2) ini buat a sama bn
        matrix_multiply(A, B, Temp, N);

        //Temp * C ((M1 * M2) * M3) ini buat ab sama c
        matrix_multiply(Temp, C, Result, N);

        printf("Case #%d:\n", t);
        print_matrix(Result, N);
    }

    return 0;
}




































//#include <stdio.h>
//
//int main(void){
//	int t, n;
//	char N[3][51][51];
//	scanf("%d", &t); getchar();
//	
//	for(int i=1; i<=t; i++){//testcases
//		scanf("%d", &n); getchar();//brp x brp
//		
//		for(int j=0; j<3; j++){//ada brp matriks
//			for(int k=0; k<n; k++){//baris
//				for(int l=0; l<n; l++){//kolom
//					scanf("%d", N[j][k][l]); getchar();
//				}
//			}
//		getchar();//ngambil newline
//		}
//		
//		for(int j=0; j<3-1; j++){// depth
//			for(int k=0; k<n; k++){//a rows 
//				for(int l=0; l<n; l++){//b columns
//					for(int m=0; m<n; m++){//a column
//						N[j][k][l] += N[j][k][m] +N[j][m][l];
//					}
//				}
//			}
//		}
//		
//		printf("Case #%d: \n", i);
//		for(int j=0; j<3-1; j++){// depth
//			for(int k=0; k<n; k++){//a rows 
//				for(int l=0; l<n; l++){//b columns
//					for(int m=0; m<n; m++){//a column
//						printf("%d ", N[j][k][l]);
//					}
//					printf("\n");
//				}
//				printf("\n");
//			}
//		}
//		 
//		
//	}
//	
//	
//	
//	
//	
//	return 0;
//}
