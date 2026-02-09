#include <stdio.h>
#include <stdbool.h>
#include <string.h> // For memset

#define MAX_N 100

// Function to solve the puzzle logic
void solve() {
    int N;
    // Read N (matrix size)
    if (scanf("%d", &N) != 1) return;

    // A[i][j] stores the matrix (using the maximum constraint size)
    int A[MAX_N][MAX_N]; 
    
    // Read the N x N matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (scanf("%d", &A[i][j]) != 1) return;
        }
    }

    // --- 1. Check Rows ---
    for (int i = 0; i < N; i++) {
        // frequency[k] is true if the number k has been seen in the current row.
        // Array size N+1 covers numbers 1 to N.
        bool seen[MAX_N + 1] = {false};
        
        for (int j = 0; j < N; j++) {
            int num = A[i][j];
            
            // Check for invalid numbers (outside 1..N), although constraints say A_i,j <= N
            if (num < 1 || num > N) {
                // This shouldn't happen based on constraints, but is good defensive programming
                printf("Nay\n");
                return; 
            }
            
            // If the number has been seen in this row, we found a duplicate
            if (seen[num]) {
                printf("Nay\n");
                return; // Immediately exit the program upon finding the first violation
            }
            
            // Mark the number as seen in this row
            seen[num] = true;
        }
    }

    // --- 2. Check Columns ---
    for (int j = 0; j < N; j++) { // j iterates through columns
        bool seen[MAX_N + 1] = {false};
        
        for (int i = 0; i < N; i++) { // i iterates through rows
            int num = A[i][j];
            
            // If the number has been seen in this column, we found a duplicate
            if (seen[num]) {
                printf("Nay\n");
                return; // Immediately exit the program upon finding the first violation
            }
            
            // Mark the number as seen in this column
            seen[num] = true;
        }
    }

    // If the program reaches this point, no duplicates were found in any row or column
    printf("Yay\n");
}

int main(void) {
    solve();
    return 0;
}
