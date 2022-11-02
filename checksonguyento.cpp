#include <stdio.h>

int main() {
    int n;
    int j = 0;
    printf(" ");
    scanf("%d", &n);
    for ( int i = 1; i <= n; i++) {
        if (n % i == 0) {
            j++;
        };
    };
    if ( j == 2 ) {
        printf("YES");
    } else {
        printf("NO");
    };
    return 0;
}