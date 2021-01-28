#include <iostream>

int main() {
    int n, s=0, t, i;
    
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &t);
        s+=t;
    }

    printf("%d", s-(n-1));

    return 0;
}