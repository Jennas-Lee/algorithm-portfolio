#include <iostream>

int main() {
    int n, t, m, s=0, i;

    scanf("%d %d", &n, &t);
    for(i=1; i<=n; i++) {
        scanf("%d", &m);
        s+=m;
        if(s==t) {
            printf("%d", i);
            return 0;
        } else if(s>t) {
            printf("%d", i-1);
            return 0;
        }
    }
    printf("%d", n);

    return 0;
}