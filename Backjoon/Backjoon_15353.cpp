#include <iostream>
#include <cstdlib>
#include <stack>

using namespace std;

int main() {
    stack <int> s1, s2;
    string a, b;
    int al, bl, n, m, u=0, v, i;
    char r[10010]={}, t;

    cin >> a;
    cin >> b;
    al = a.length(), bl=b.length();
    
    for(i=0; i<al; i++) {
        t=a.at(i);
        s1.push(t-48);
    }
    for(i=0; i<bl; i++) {
        t=b.at(i);
        s2.push(t-48);
    }
    i=0;
    while(s1.empty() == false || s2.empty() == false || u==1) {
        if(s1.empty()==true) {
            n=0;
        } else {
            n=s1.top();
            s1.pop();
        }
        if(s2.empty()==true) {
            m=0;
        } else {
            m=s2.top();
            s2.pop();
        }
        
        v=n+m+u;
        if(v>=10) {
            v-=10, u=1;
        } else {
            u=0;
        }
        r[i++]=v+48;
    }
    for(i-=1; i>=0; i--) {
        printf("%c", r[i]);
    }

    return 0;
}