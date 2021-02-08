#include <iostream>

int main() {
    int n, a, b, c, d, e, i;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        printf("$%.2lf\n", a*350.34+b*230.90+c*190.55+d*125.30+e*180.90);
    }

    return 0;
}