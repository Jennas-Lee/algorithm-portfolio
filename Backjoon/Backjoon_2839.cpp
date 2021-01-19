#include <iostream>

int main() {
    int n, t, min, r;

    scanf("%d", &n);
    t=n;
    while(t>=0) {
        if(t%3==0) {
            min=t;
        }
        t-=5;
    }
    printf("3 : %d | 5 : %d\n", min/3, (n-min)/5);
    if(((min/3)*3)+(((n-min)/5)*5) == n) {
        printf("%d", (min/3)+((n-min)/5));
    } else {
        printf("-1");
    }

    return 0;
}