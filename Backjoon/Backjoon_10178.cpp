#include <iostream>

int main() {
    int n, c, v, i;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &c, &v);
        printf("You get %d piece(s) and your dad gets %d piece(s).\n", c/v, c%v);
    }

    return 0;
}