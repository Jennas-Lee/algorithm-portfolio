#include <iostream>
#include <cmath>

void swap(int *a, int *b) {
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

int main() {
    int n, x1, x2, y1, y2, r1, r2, r, i;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

        if(r1<r2) {
            swap(&x1, &x2);
            swap(&y1, &y2);
            swap(&r1, &r2);
        }

        double d=sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));

        if(x1==x2 && y1==y2 && r1==r2) {
            r=-1;
        } else if(x1==x2 && y1==y2) {
            r=0;
        } else if(d>r1+r2 || r1-r2>d) {
            r=0;
        } else if(r1+r2==d || r1-r2==d) {
            r=1;
        } else {
            r=2;
        }
        printf("%d\n", r);

    }

    return 0;
}