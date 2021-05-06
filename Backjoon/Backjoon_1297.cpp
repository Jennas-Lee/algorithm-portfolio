#include <iostream>
#include <cmath>

int main() {
    int a, b, c;
    double x;

    scanf("%d %d %d", &a, &b, &c);
    x=sqrt(((double)a*a)/((double)b*b+(double)c*c));
    printf("%d %d", (int)floor(b*x), (int)floor(c*x));

    return 0;
}
