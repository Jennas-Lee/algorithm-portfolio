#include <iostream>
#include <cmath>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    printf("%d %d", (int)floor(b*a/18.357), (int)floor(c*a/18.357));

    return 0;
}