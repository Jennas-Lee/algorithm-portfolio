#include <iostream>
#include <cstring>

int main() {
    char a[101], b[101], y;
    int i, al, bl;

    scanf("%s %c %s", a, &y, b);
    al=strlen(a), bl=strlen(b);
    if(al < bl) {
        char t[101];
        int tl;
        strcpy(t, a);
        strcpy(a, b);
        strcpy(b, t);
        tl=al;
        al=bl;
        bl=tl;
    }
    if(y=='+') {
        if(al==bl) {
            a[0]='2';
        } else {
            a[al-bl]='1';
        }
        printf("%s", a);
    } else {
        printf("1");
        for(i=0; i<(al+bl-2); i++) {
            printf("0");
        }
    }

    return 0;
}