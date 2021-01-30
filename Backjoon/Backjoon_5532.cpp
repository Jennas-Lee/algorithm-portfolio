#include <iostream>
#include <cmath>

int main() {
    int l, a, b, c, d;

    scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);
    printf("%d", l-(int)ceil(((double)a/c) > ((double)b/d) ? ((double)a/c) : ((double)b/d)));

    return 0;
}