#include <iostream>

int main() {
    int n, s, i;

    scanf("%d", &s);
    for(i=0; i<9; i++) {
        scanf("%d", &n);
        s-=n;
    }
    printf("%d", s);

    return 0;
}