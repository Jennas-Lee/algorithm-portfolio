#include <iostream>
#include <cstdlib>
#include <cstring>

int main() {
    int i, mina, minb, maxa, maxb;
    char a[8], b[8];

    scanf("%s %s", &a, &b);
    for(i=0; i<strlen(a); i++) {
        if(a[i]=='6') {
            a[i]='5';
        }
    }
    mina=atoi(a);
    for(i=0; i<strlen(a); i++) {
        if(a[i]=='5') {
            a[i]='6';
        }
    }
    maxa=atoi(a);
    for(i=0; i<strlen(b); i++) {
        if(b[i]=='6') {
            b[i]='5';
        }
    }
    minb=atoi(b);
    for(i=0; i<strlen(b); i++) {
        if(b[i]=='5') {
            b[i]='6';
        }
    }
    maxb=atoi(b);

    printf("%d %d", mina+minb, maxa+maxb);

    return 0;
}