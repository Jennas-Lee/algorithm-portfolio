#include <iostream>

long long int gcd(long long int a, long long int b) {
    long long int t, n;

    if(a<b) {
        t=a;
        a=b;
        b=t;
    }

    while(b!=0) {
        n=a%b;
        a=b;
        b=n;
    }

    return a;
}

int main() {
    long long n, m, i;

    scanf("%lld %lld", &n, &m);
    for(i=0; i<gcd(n, m); i++) {
        printf("1");
    }

    return 0;
}