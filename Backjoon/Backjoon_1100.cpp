#include <iostream>

int main() {
    int s=0, i, j;
    char c[9];

    for(i=0; i<8; i++) {
        scanf("%s", c);
        for(j=0; j<8; j++) {
            if(c[j]=='F') {
                if((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0)) {
                    s++;
                }
            }
        }
    }
    printf("%d", s);

    return 0;
}