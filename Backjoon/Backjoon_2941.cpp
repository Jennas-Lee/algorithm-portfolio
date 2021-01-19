#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[105];
    int r=0, i;

    cin >> a;

    for(i=0; i<strlen(a); i++) {
        if(a[i]=='d' && a[i+1]=='z' && a[i+2]=='=') {
            i+=2;
            r++;
        } else if((a[i]=='c' && a[i+1]=='=') || 
        (a[i]=='c' && a[i+1]=='-') || 
        (a[i]=='d' && a[i+1]=='-') || 
        (a[i]=='l' && a[i+1]=='j') ||
        (a[i]=='n' && a[i+1]=='j') || 
        (a[i]=='s' && a[i+1]=='=') ||
        (a[i]=='z' && a[i+1]=='=')) {
            i+=1;
            r++;
        } else {
            r++;
        }
    }
    printf("%d", r);

    return 0;
}