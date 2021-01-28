#include <iostream>
#include <cmath>

int main() {
    long long int n, m;

    scanf("%lld %lld", &n, &m);
    printf("%lld", n>m?(n-m):(m-n));

    return 0;
}