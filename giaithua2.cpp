#include <stdio.h>

int main() {
    int n;
    int giai_thua = 1;
    printf(" ");
    scanf("%d", &n);
    if ( n == 1) {
        printf("1");
    }
    printf("%d", giai_thua = n * giai_thua*(n-1));
    return 0;
}