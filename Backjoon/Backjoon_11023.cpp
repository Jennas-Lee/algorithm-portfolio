#include <iostream>

int main() {
    int n, s=0;

    while(scanf("%d", &n)!=EOF) {
        s+=n;
    }
    printf("%d", s);

    return 0;
}