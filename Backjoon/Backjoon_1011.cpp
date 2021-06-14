#include <iostream>
#include <cmath>

int main() {
    long long int n, a, b, i;

    scanf("%lld", &n);
    for(i=0; i<n; i++) {
        scanf("%lld %lld", &a, &b);
        long long int t=(long long int)floor(sqrt((long double)(b-a))*2);
        if(fmodl(sqrt((long double)(b-a)), 1.0) == (long double)0) {
            t-=1;
        }
        printf("%lld\n", t);
    }
}
