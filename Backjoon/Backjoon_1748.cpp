#include <iostream>
#include <cmath>

int main() {
    int n, p, i;
    long long int s=0;

    scanf("%d", &n);
    for(i=1; i<10; i++) {
        p=pow(10, i-1);
        if(n<p*9) {
            s+=(n*i);
            break;
        } else {
            s+=((p*9)*i);
            n-=(p*9);
        }
    }
    printf("%lld", s);

    return 0;
}