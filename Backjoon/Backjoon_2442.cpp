#include <iostream>

int main() {
    int n, i, j;

    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        for(j=n-i; j>0; j--) {
            printf(" ");
        }
        for(j=0; j<i; j++) {
            printf("*");
        }
        for(j=0; j<i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}