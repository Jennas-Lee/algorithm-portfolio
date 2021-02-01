#include <iostream>

int main() {
    int t, n, c, cs, i, j;
    double g, gs;

    scanf("%d", &t);
    for(i=0; i<t; i++) {
        gs=0, cs=0;
        scanf("%d", &n);
        for(j=0; j<n; j++) {
            scanf("%d %lf", &c, &g);
            cs+=c;
            gs+=(c*g);
        }
        printf("%d %.1lf\n", cs, gs/cs);
    }

    return 0;

}