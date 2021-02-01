#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    string str;
    int l, r=0, r2=0, i;

    cin >> str;
    l=str.length();
    for(i=0; i<l; i++) {
        if(str[i]=='(') {
            s.push(i);
        } else {
            s.pop();
            if(str[i-1]=='(') {
                r+=s.size();
            } else {
                r+=1;
            }
        }
    }
    printf("%d", r);

    return 0;
}