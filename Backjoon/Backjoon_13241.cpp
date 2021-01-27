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

long long int lcm(long long int a, long long int b) {
    return a*b/gcd(a, b);
}

int main() {
    long long int n, m;

    scanf("%lld %lld", &n, &m);
    printf("%lld", lcm(n, m));

    return 0;
}