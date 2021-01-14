#include <stdio.h>
#include <string.h>

int main() {
    int a[26]={}, m=0, c, i, e;
    char s[1000010];

    scanf("%s", s);
    e=strlen(s);
    for(i=0; i<e; i++) {
        if(s[i]>=97) {
            s[i]-=32;
        }
        a[s[i]-65]++;
        if(a[s[i]-65]>m) {
            c=s[i];
            m=a[s[i]-65];
        } else if(a[s[i]-65]==m) {
            c=-1;
        } else {
            continue;
        }
    }
    if(c==-1) {
        printf("?");
    } else {
        printf("%c", c);
    }

    return 0;
}