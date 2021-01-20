#include <iostream>
#include <cmath>

bool f(int n) {
    int i;

    for(i=2; i<=sqrt((double)n); i++) {
        if(n%i==0) return false;
    }
    return true;
}

int main() {
    int n, m, s=0, min=0, i;

    scanf("%d %d", &m, &n);
    for(i=m; i<=n; i++) {
        if(i==1) {
            continue;
        }
        if(f(i)) {
            s+=i;
            if(min==0) min=i;
        }
    }

    if(s==0 && min==0) {
        printf("-1");
    } else {
        printf("%d\n%d", s, min);
    }

    return 0;
}