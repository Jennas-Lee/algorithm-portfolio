#include <iostream>

int main() {
    int n, s, a, r=0, i;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &s, &a);
        r+=(a%s);
    }
    printf("%d", r);

    return 0;
}