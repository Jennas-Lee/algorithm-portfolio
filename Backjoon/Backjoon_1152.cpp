#include <iostream>
#include <string.h>

int main() {
    int r=0, e, i;
    char s[1000010];

    std::cin >> s;
    e=strlen(s);
    for(i=0; i<e; i++) {
        if(i!=0 && i!=(e-1) && s[i]==' ') {
            r++;
        }
    }
    printf("%d", r+1);

    return 0;
}