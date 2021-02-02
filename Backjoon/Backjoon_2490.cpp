#include <iostream>

int main() {
    int n, s, i, j;
    
    for(i=0; i<3; i++) {
        s=0;
        for(j=0; j<4; j++) {
            scanf("%d", &n);
            s+=n;
        }
        s=4-s;
        if(s==0) {
            printf("E\n");
        } else if(s==1) {
            printf("A\n");
        } else if(s==2) {
            printf("B\n");
        } else if(s==3) {
            printf("C\n");
        } else if(s==4) {
            printf("D\n");
        }
    }

    return 0;
}