#include <iostream>

int main() {
    int t, a, b, i;
    char c;

    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d%c%d", &a, &c, &b);
        printf("%d\n", a+b);
    }

    return 0;
}