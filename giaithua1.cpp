#include <stdio.h>

int main() {
    long long int giai_thua = 1 ;
     long long int n;
    printf(" ");
    scanf("%lld", &n);
    for ( long long int i = 1; i <= n; i++) {
        giai_thua *= i;
    };
    printf("%lld", giai_thua);
    return 0;
}