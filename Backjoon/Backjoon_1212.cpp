#include <iostream>
#include <cstdlib>

int f(char *c) {
    char t[4];
    int i;

    for(i=0; i<3; i++) {
        t[i]=c[2-i];
    }
    return atoi(t);
}

int main() {
    int u=0;
    char c;

    while(1) {
        scanf("%c", &c);
        if(c=='\n') {
            break;
        } else {
            char t[3]={'0', '0', '0'}, r[4];
            int i=0, j, n=c-48;
            while(n) {
                t[i++]=(n%2)+48;
                n/=2;
            }
            if(u==0) {
                printf("%d", f(t));
                u=1;
            } else {
                printf("%03d", f(t));
            }
        }
    }

    return 0;
}