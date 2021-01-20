#include <iostream>
#include <cmath>

int main() {
    int n, x1, x2, y1, y2, r1, r2, i;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        int d=abs(x1-x2)+abs(y1-y2);
        printf("%d %d\n", d, r1+r2);
    }

    return 0;
}