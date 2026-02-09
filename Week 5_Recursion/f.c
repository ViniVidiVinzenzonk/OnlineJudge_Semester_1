#include <stdio.h>
int k=0;
long long sum_trees(int n, int trees[]) {
	k++;
    if (n <= 0) {
        return 0;
    }
    return trees[n - 1] + sum_trees(n - 1, trees);
}

int main(void) {
    int T, i, j;
    if (scanf("%d", &T) != 1) return 1;

    for ( i = 1; i <= T; i++) {
        int N;
        if (scanf("%d", &N) != 1) return 1;

        int trees[1000]; 
        for ( j = 0; j < N; j++) {
            if (scanf("%d", &trees[j]) != 1) return 1;
        }

        long long total = sum_trees(N, trees);

        printf("Case #%d: %lld\n", i, total);
    }
    return 0;
}
