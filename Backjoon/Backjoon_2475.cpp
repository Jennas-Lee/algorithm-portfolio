#include <iostream>

int main() {
    int a, s=0, i;

    for(i=0; i<5; i++) {
        scanf("%d", &a);
        s+=(a*a);
    }

    printf("%d", s%10);

    return 0;
}