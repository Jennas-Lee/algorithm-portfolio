#include <stdio.h>

int main() {
    int n, m, i, j;
    char t;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d ", &m);
        while(1) {
            t=getchar();
            if(t=='\n') {
                break;
            } else {
                for(j=0; j<m; j++) {
                    printf("%c", t);
                }
            }
        }
        printf("\n");
    }

    return 0;
}