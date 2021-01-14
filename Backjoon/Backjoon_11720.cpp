#include <stdio.h>

int main() {
    int n, s=0, i;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        s+=getchar()-48;
    }

    printf("%d", s);
}