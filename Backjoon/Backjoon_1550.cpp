#include <iostream>
#include <cstring>
#include <cmath>

int main() {
    char a[7];
    int s=0, t, i;

    scanf("%s", a);
    for(i=0; i<strlen(a); i++) {
        int t;
        if(a[i]<=57) {
            t=a[i]-48;
        } else {
            t=a[i]-55;
        }
        s+=(t*(pow(16, strlen(a)-i-1)));
    }
    printf("%d", s);

    return 0;
}