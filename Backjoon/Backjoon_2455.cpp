#include <iostream>

int main() {
    int n, s=0, m=0, i;

    for(i=0; i<8; i++) {
        scanf("%d", &n);
        if(i%2==0) {
            s-=n;
        } else {
            s+=n;
        }
        if(s>m) {
            m=s;
        }
    }

    printf("%d", m);

    return 0;
}