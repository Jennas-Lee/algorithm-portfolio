#include <iostream>

int main() {
    int t, i;
    double n;

    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%lf", &n);
        printf("$%.2lf\n", n*0.8);
    }

    return 0;
}