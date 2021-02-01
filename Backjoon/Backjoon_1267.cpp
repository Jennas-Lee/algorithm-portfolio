#include <iostream>

int main() {
    int n, t, m=0, y=0, i;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &t);
        y+=((t/30)+1)*10;
        m+=((t/60)+1)*15;
    }
    if(y>m) {
        printf("M %d", m);
    } else if(y==m) {
        printf("Y M %d", y);
    } else {
        printf("Y %d", y);
    }

    return 0;
}