#include <stdio.h>

void explore(int tree[], int n, int idx, int current_sum) {
    if (idx >= n) {
        return;
    }

    int current_value = tree[idx];
    int new_sum = current_sum + current_value;

    int index_1based = idx + 1; 

    int left_1based = 2 * index_1based;
    int right_1based = (2 * index_1based) + 1;

    int left = left_1based - 1;
    int right = right_1based - 1;

    if (left >= n && right >= n) {
        printf("%d\n", new_sum);
        return;
    }

    if (left < n) {
        explore(tree, n, left, new_sum);
    }
    
    if (right < n) {
        explore(tree, n, right, new_sum);
    }
}

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 1;

    for (int i = 0; i < t; i++) {
        int tree[100];
        int n;
        if (scanf("%d", &n) != 1) return 1;

        for (int j = 0; j < n; j++) {
            if (scanf("%d", &tree[j]) != 1) return 1;
        }

        printf("Case #%d:\n", i + 1);
        
        if (n > 0) {
            explore(tree, n, 0, 0); 
        }
    }
    return 0;
}
