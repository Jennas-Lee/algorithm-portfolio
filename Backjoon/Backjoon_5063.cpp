#include <iostream>

int main() {
    int n, r, e, c, i;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d %d", &r, &e, &c);
        if(r<(e-c)) {
            printf("advertise\n");
        } else if(r==(e-c)) {
            printf("does not matter\n");
        } else {
            printf("do not advertise\n");
        }
    }

    return 0;
}