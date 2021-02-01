#include <iostream>

int main() {
    int n, a, b, as=100, bs=100, i;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &a, &b);
        if(a>b) {
            bs-=a;
        } else if(a<b) {
            as-=b;
        }
    }

    printf("%d\n%d", as, bs);

    return 0;
}