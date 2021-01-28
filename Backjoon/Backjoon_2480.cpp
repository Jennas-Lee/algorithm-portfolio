#include <iostream>

int main() {
    int a, b, c, m=0;

    scanf("%d %d %d", &a, &b, &c);
    m=a>m?a:m;
    m=b>m?b:m;
    m=c>m?c:m;
    if(a==b && b==c) {
        printf("%d", 10000+(a*1000));
    } else if(a==b) {
        printf("%d", 1000+(a*100));
    } else if(b==c) {
        printf("%d", 1000+(b*100));
    } else if(c==a) {
        printf("%d", 1000+(c*100));
    } else {
        printf("%d", m*100);
    }

    return 0;
}