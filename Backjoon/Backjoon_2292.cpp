#include <iostream>

int main() {
    int n, r=1, t=1, i;

    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        if(t>=n) {
            printf("%d", i);
            break;
        } else {
            t+=i*6;
        }
    }

    return 0;
}