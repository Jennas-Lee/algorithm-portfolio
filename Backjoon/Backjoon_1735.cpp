#include <iostream>

int gcd(int a, int b) {
    int t, n;

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

int lcm(int a, int b) {
    return a*b/gcd(a, b);
}

int main() {
    int a1, a2, b1, b2, ar, br, t;

    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
    t=lcm(b1, b2);
    a1*=(t/b1);
    a2*=(t/b2);
    ar=a1+a2;
    br=t;
    t=gcd(ar, br);

    printf("%d %d", ar/t, br/t);
}