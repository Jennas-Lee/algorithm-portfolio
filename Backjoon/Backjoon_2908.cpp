#include <iostream>

int main() {
    int a, b, n=0, m=0, i;

    scanf("%d %d", &a, &b);
    for(i=0; i<3; i++) {
        n+=a%10, m+=b%10;
        n*=10, m*=10;
        a/=10, b/=10;
    }
    printf("%d", n > m ? n : m);

    return 0;
}