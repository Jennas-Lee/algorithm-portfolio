#include <iostream>

int main() {
    int c, k, p, s=0, i;

    scanf("%d %d %d", &c, &k, &p);
    for(i=1; i<=c; i++) {
        s+=k*i+p*i*i;
    }
    printf("%d", s);

    return 0;
}