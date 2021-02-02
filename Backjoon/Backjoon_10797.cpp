#include <iostream>

int main() {
    int d, n, s=0, i;

    scanf("%d", &d);
    for(i=0; i<5; i++) {
        scanf("%d", &n);
        if(n%10==d) {
            s++;
        }
    }
    printf("%d", s);

    return 0;
}