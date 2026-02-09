#include <stdio.h>

typedef long long ll;

ll function_jojo(ll x) {
    if (x == 1) {
        return 1;
    } else if (x % 2 == 0) {
        return function_jojo(x / 2);
    } else {
        return function_jojo(x - 1) + function_jojo(x + 1);
    }
}

int main(void) {
    int tc;
    if (scanf("%d", &tc) != 1) return 1;

    for (int i = 0; i < tc; i++) {
        ll angka;
        if (scanf("%lld", &angka) != 1) return 1;
        
        ll hasil = function_jojo(angka);
        
        printf ("Case #%d: %lld\n", i + 1, hasil);
    }
    
    return 0;
}
