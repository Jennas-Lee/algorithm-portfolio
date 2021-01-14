#include <stdio.h>
#include <string.h>

int main() {
    int i, j;
    char s[105];

    scanf("%s", s);
    for(i=97; i<=122; i++) {
        int r=-1;
        for(j=0; j<strlen(s); j++) {
            if(s[j]==i) {
                r=j;
                break;
            }
        }
        printf("%d ", r);
    }

    return 0;
}