#include <stdio.h>
#include <string.h>

#define MAX_LEN 2000
#define MAX_N 16 

char fib_strings[MAX_N][MAX_LEN];

int main(void) {
    int T,i,j;
    if (scanf("%d", &T) != 1) return 1;

    for ( i = 1; i <= T; i++) {
        int n;
        char s0_char, s1_char;
        
        // Membaca N, S[0], S[1] dengan spasi untuk mengabaikan whitespace
        if (scanf("%d %c %c", &n, &s0_char, &s1_char) != 3) return 1;

        // Reset array global. Penting untuk memastikan semua byte adalah 0.
//        memset(fib_strings, 0, sizeof(fib_strings));

        // Inisialisasi S[0]
        fib_strings[0][0] = s0_char;
        fib_strings[0][1] = '\0'; // Tambahkan terminator eksplisit

        // Inisialisasi S[1]
        fib_strings[1][0] = s1_char;
        fib_strings[1][1] = '\0'; // Tambahkan terminator eksplisit

        // Iterasi: S[j] = S[j-1] + S[j-2]
        for ( j = 2; j <= n; j++) {
            // Salin S[j-1] ke S[j]
            strcpy(fib_strings[j], fib_strings[j - 1]);
            // Tambahkan S[j-2] ke S[j]
            strcat(fib_strings[j], fib_strings[j - 2]);
        }

        printf("Case #%d: %s\n", i, fib_strings[n]);
    }
    return 0;
}
