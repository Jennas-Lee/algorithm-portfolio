#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    int n, s=0, i;
    char a[1000010];

    scanf("%s", a);
    for(i=0; i<strlen(a); i++) {
        if(a[i]=='1') {
            s+=pow(2, 7-i);
        }
    }

    cout << oct << s;

    return 0;
}