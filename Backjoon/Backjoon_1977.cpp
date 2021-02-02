#include <iostream>
#include <cmath>

int main() {
    int m, n, s=0, min=0, i;

    scanf("%d %d", &m, &n);
    for(i=(int)sqrt(m); i<=(int)sqrt(n); i++) {
        if(m<=(i*i) && (i*i)<=n) {
            if(min==0) {
                min=i*i;
            }
            s+=(i*i);
        }
    }
    if(min==0 && s==0) {
        printf("-1");
    } else {
        printf("%d\n%d", s, min);
    }

    return 0;
}