#include <iostream>

int main() {
    int a, b, s=0, m=0, i;

    for(i=0; i<10; i++) {
        scanf("%d %d", &a, &b);
        s-=a;
        s+=b;
        if(s>m) {
            m=s;
        }
    }

    printf("%d", m);
}