#include <iostream>

int main() {
    int n, min=100, s=0, i;

    for(i=0; i<7; i++) {
        scanf("%d", &n);
        if(n%2!=0) {
            s+=n;
            if(n<min) {
                min=n;
            }
        }
    }
    if(s==0) {
        printf("-1");
    } else {
        printf("%d\n%d", s, min);
    }

    return 0;
}