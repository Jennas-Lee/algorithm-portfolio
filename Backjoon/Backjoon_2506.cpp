#include <iostream>

int main() {
    int n, m, c=0, s=0, i;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &m);
        if(m==1) {
            c++;
            s+=c;
        } else {
            c=0;
        }
    }
    printf("%d", s);

    return 0;
}