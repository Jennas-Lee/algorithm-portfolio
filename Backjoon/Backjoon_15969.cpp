#include <iostream>

int main() {
    int n, m, min=1000, max=0, i;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &m);
        if(m>max) {
            max=m;
        }
        if(m<min) {
            min=m;
        }
    }
    printf("%d", max-min);

    return 0;
}