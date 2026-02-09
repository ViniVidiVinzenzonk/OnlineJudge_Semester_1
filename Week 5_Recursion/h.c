// pROBLEM dESPERATE hORSE - pROB H
#include <stdio.h>
#include <string.h>

#define SIZE 8
#define MAX_STEPS 99

// Array untuk menyimpan langkah minimum dari posisi awal ke setiap kotak.
int dist[SIZE][SIZE]; 

// Posisi tujuan akhir
int end_r, end_c; 

// Gerakan kuda (8 kemungkinan langkah)
int dr[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dc[] = {-1, 1, -2, 2, -2, 2, -1, 1};

// Kolom: A=0, B=1, ...; Baris: 1=7, 2=6, ... (array 0-indeks)
void parse_coords(const char* s, int* r, int* c) {
    *c = s[0] - 'A';
    *r = SIZE - (s[1] - '0');
}

void solve(int current_r, int current_c, int steps) {
    if (current_r < 0 || current_r >= SIZE || current_c < 0 || current_c >= SIZE) {
        return;
    }

    if (steps >= dist[current_r][current_c]) {
        return;
    }
    
    dist[current_r][current_c] = steps;

    if (current_r == end_r && current_c == end_c) {
        return;
    }

    int i=0;
    for (i = 0; i < 8; i++) {
        int next_r = current_r + dr[i];
        int next_c = current_c + dc[i];
        
        solve(next_r, next_c, steps + 1);
    }
}

int main(void) {
    int T;
    if (scanf("%d", &T) != 1) return 1;
int i;
    for (i = 1; i <= T; i++) {
        char start_s[3], end_s[3];
        
        if (scanf("%s %s", start_s, end_s) != 2) return 1;
        int start_r, start_c;

        parse_coords(start_s, &start_r, &start_c);
        parse_coords(end_s, &end_r, &end_c);

        int r,c;
        for (r = 0; r < SIZE; r++) {
            for ( c = 0; c < SIZE; c++) {
                dist[r][c] = MAX_STEPS;
            }
        }

        solve(start_r, start_c, 0);
        printf("Case #%d: %d\n", i, dist[end_r][end_c]);
    }
    return 0;
}
