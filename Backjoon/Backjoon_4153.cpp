#include <iostream>

int main() {
    int a, b, c;

    while(1) {
        scanf("%d %d %d", &a, &b, &c);

        if(a==0 && b==0 && c==0) {
            break;
        } else {
            if(((a*a)+(b*b))==(c*c) || ((b*b)+(c*c))==(a*a) || ((c*c)+(a*a))==(b*b)) {
                printf("right\n");
            } else {
                printf("wrong\n");
            }
        }
    }

    return 0;
}