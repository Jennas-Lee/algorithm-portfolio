#include <iostream>

int main() {
    int x, y, w, h, m=1000;

    scanf("%d %d %d %d", &x, &y, &w, &h);
    if(h-y<m) {
        m=h-y;
    }
    if(w-x<m) {
        m=w-x;
    }
    if(x<m) {
        m=x;
    }
    if(y<m) {
        m=y;
    }

    printf("%d", m);
}