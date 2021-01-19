#include <iostream>

using namespace std;

int main() {
    string s;

    cin >> s;
    int m=s.size(), r=0, t, i;
    for(i=0; i<m; i++) {
        t=s.at(i)-65;
        if(t<3) r+=3;
        else if(t<6) r+=4;
        else if(t<9) r+=5;
        else if(t<12) r+=6;
        else if(t<15) r+=7;
        else if(t<19) r+=8;
        else if(t<22) r+=9;
        else r+=10;
    }
    printf("%d", r);

    return 0;
}