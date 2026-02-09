#include<stdio.h>
int main(){
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        int N;
        scanf("%d", &N);

        int A[N], B[(N*(N-1))/2];
        for(int j = 0; j < N; j++){
            scanf("%d", &A[j]);
        }

        int c = 0;
        for(int j = 0; j < N; j++){
            for(int k = 0; k < j; k ++){
            	printf("%d %d\n", j, k);
                B[c++] = A[j] + A[k];//masukkin hasil pertambahan ke array
            }
        }

        int total = 0;
        for(int j = 0; j < N; j++){
            for(int k = 0; k < c; k++){//dari array ngebandingin hasil pertambahan dgn angka di array awal
                if(A[j] == B[k]){total += 1; break;}
            }
        }
        printf("Case #%d: %d\n", i + 1, total);
    }
    return 0;
}
