#include <iostream>
#include <cmath>

int main() {
    int a, b, v;

    scanf("%d %d %d", &a, &b, &v);
    v-=b;
    printf("%d", (int)ceil((double)v/(a-b)));

    return 0;
}