#include <stdio.h>

int main() {
    int n, i;

    scanf("%d\n", &n);
    for(i=0; i<n; i++) {
        int s=0, c=0;
        while(1) {
            char t;
            scanf("%c", &t);
            if(t=='\n') {
                break;
            } else if(t=='O') {
                s+=++c;
            } else {
                c=0;
            }
        }
        printf("%d\n", s);
    }

    return 0;
}