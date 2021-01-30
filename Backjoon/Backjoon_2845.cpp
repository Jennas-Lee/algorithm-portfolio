#include <iostream>

int main() {
    int l, p, n, i;

    scanf("%d %d", &l, &p);
    for(i=0; i<5; i++) {
        scanf("%d", &n);
        printf("%d ", n-(l*p));
    }

    return 0;
}