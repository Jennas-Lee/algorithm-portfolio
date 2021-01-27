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
    int n, a, b, i;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", lcm(a, b));
    }

    return 0;
}