#include <iostream>

int main() {
    long long int t, a, max=0, min=1000000, i;

    scanf("%lld", &t);
    for(i=0; i<t; i++) {
        scanf("%lld", &a);
        if(a>max) {
            max=a;
        }
        if(a<min) {
            min=a;
        }
    }
    printf("%lld", max*min);

    return 0;
}