#include <iostream>
#include <cmath>

int main() {
    int n, m, i;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &m);
        printf("%d\n", (int)sqrt((double)m));
    }

    return 0;
}