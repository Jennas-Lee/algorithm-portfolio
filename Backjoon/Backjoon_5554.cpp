#include <iostream>

int main() {
    int a, s=0, i;

    for(i=0; i<4; i++) {
        scanf("%d", &a);
        s+=a;
    }
    printf("%d\n%d", s/60, s%60);

    return 0;
}