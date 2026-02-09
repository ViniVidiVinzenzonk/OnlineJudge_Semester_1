#include <stdio.h>

int main() {
    int T;
    long long N, X;
    scanf("%d", &T);

    for (int i= 0; i <T; i++) {
        scanf("%lld %lld", &N, &X);

        long long depan = X / 2;
        long long belakang = (N / 2) - (X / 2);

        long long result = (depan < belakang) ? depan : belakang;

        printf("Case #%d: %lld\n", i+1, result);
    }

    return 0;
}
