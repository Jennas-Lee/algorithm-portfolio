#include <iostream>

int main() {
    int n, m, c=0, nc=0, i;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &m);
        if(m==1) {
            c++;
        } else {
            nc++;
        }
    }
    if(c>nc) {
        printf("Junhee is cute!");
    } else {
        printf("Junhee is not cute!");
    }

    return 0;
}