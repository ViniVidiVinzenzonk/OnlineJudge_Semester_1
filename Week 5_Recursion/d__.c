#include <stdio.h>
#include <string.h>

#define max 100

// Struktur untuk menyimpan koordinat (posisi) di Queue
typedef struct {
    int r;
    int c;
} Posisi;

// Queue untuk BFS
Posisi q[max * max];
int head, tail;

int w; // Hitungan lantai terendam
char f[max][max]; // Peta rumah

// Arah pergerakan (Atas, Bawah, Kiri, Kanan)
int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};

void bfs(int n, int m, int start_r, int start_c) {
    head = 0;
    tail = 0;

    // Masukkan posisi awal ke Queue
    q[tail].r = start_r;
    q[tail].c = start_c;
    tail++;
    
    while (head < tail) {
        int r = q[head].r;
        int c = q[head].c;
        head++;

        for (int i = 0; i < 4; i++) {
            int next_r = r + dr[i];
            int next_c = c + dc[i];

            // Cek Batas
            if (next_r < 0 || next_r >= n || next_c < 0 || next_c >= m) {
                continue;
            }

            // Cek Lantai
            if (f[next_r][next_c] == '.') {
                // Basahi lantai
                w++;
                f[next_r][next_c] = '#';

                // Masukkan ke Queue
                q[tail].r = next_r;
                q[tail].c = next_c;
                tail++;
            }
        }
    }
}

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 1;

    for (int i = 1; i <= t; i++) {
        int n, m;
        if (scanf("%d %d", &n, &m) != 1) return 1;

        int idx_row = -1, idx_col = -1;
        
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                if (scanf(" %c", &f[j][k]) != 1) return 1;
                if (f[j][k] == 'S') {
                    idx_row = j;
                    idx_col = k;
                }
            }
        }

        w = 0;
        
        // Panggil BFS, dimulai dari lokasi S.
        // Fungsi BFS akan menangani penyebaran ke tetangga S
        if (idx_row != -1) {
            bfs(n, m, idx_row, idx_col);
        }

        printf("Case #%d: %d\n", i, w);
    }

    return 0;
}
