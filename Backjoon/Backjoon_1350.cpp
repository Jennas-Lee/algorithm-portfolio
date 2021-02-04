#include <iostream>
#include <cmath>

int main() {
    long long int n, c, a[1010], s=0, i;

    scanf("%lld", &n);
    for(i=0; i<n; i++) {
        scanf("%lld", &a[i]);
    }
    scanf("%lld", &c);
    for(i=0; i<n; i++) {
        if(a[i]!=0) {
            s+=c*(long long int)ceil(a[i]/(double)c);
        }
    }
    printf("%lld", s);

    return 0;
}