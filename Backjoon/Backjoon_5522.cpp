#include <iostream>

int main() {
    int n, s=0, i;

    for(i=0; i<5; i++) {
        scanf("%d", &n);
        s+=n;
    }
    printf("%d", s);

    return 0;
}