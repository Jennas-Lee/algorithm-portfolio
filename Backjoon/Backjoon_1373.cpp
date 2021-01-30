#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n, l, i;
    char a[1000010];

    scanf("%s", a);
    l=strlen(a);
    if(l==1 && a[0]=='0') {
        printf("0");
    } else {
        if(l%3==1) {
            printf("1");
        } else if(l%3==2) {
            if(a[0]=='1' && a[1]=='1') {
                printf("3");
            } else {
                printf("2");
            }
        }
        for(i=l%3; i<l; i+=3) {
            int s=0;
            s+=(a[i]-48)*4;
            s+=(a[i+1]-48)*2;
            s+=(a[i+2]-48);
            printf("%d", s);
        }
    }

    return 0;
}