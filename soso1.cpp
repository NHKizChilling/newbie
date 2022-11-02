#include <bits/stdtr1c++.h>

int main() {
    int l, r;
    int count = 0;
    char j[5];
    char x = '1';

    //do {
        printf(" ");
    scanf("%d %d", &l, &r);
    //} while ( l >= 1 && l <= r && r <= 10000);

    for (int i = l; i <= r; i++) {
        sprintf( j, "%d\n", i);
        for ( short h = 0; h <= sizeof(j); h++ ) {
            if ( x == j[h] ) {
                count++;
            };
        };
    };

    printf("%d", count);
    return 0;
}
