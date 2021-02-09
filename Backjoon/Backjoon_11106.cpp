#include <iostream>

int main() {
    int t, n, m, i;

    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d", &n, &m);
        printf("%d %d\n", m*2-n, m-(m*2-n));
    }

    return 0;
}