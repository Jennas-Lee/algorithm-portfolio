#include <iostream>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    a+=b;
    if(a>=c*2) {
        printf("%d", a-c-c);
    } else {
        printf("%d", a);
    }

    return 0;
}