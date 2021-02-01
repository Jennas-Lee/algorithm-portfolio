#include <iostream>

int main() {
    int n, m;

    scanf("%d", &n);
    while(1) {
        scanf("%d", &m);
        if(m==0) {
            break;
        } else {
            if(m%n==0) {
                printf("%d is a multiple of %d.\n", m, n);
            } else {
                printf("%d is NOT a multiple of %d.\n", m, n);
            }
        }
    }

    return 0;
}