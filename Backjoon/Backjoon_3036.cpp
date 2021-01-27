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

int main() {
    int n, f, m, i;

    scanf("%d", &n);
    scanf("%d", &f);
    for(i=0; i<n-1; i++) {
        scanf("%d", &m);
        printf("%d/%d\n", f/gcd(f, m), m/gcd(f, m));
    }

    return 0;
}