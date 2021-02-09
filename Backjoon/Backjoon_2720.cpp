#include <iostream>

int main() {
    int t, c, i;

    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &c);
        printf("%d %d %d %d\n", c/25, c%25/10, c%25%10/5, c%25%10%5/1);
    }

    return 0;
}