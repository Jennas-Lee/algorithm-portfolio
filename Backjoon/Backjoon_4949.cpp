#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    int m, j;
    string a;

    while(1) {
    	stack<char> s;
        j=0, m=1;
        getline(cin, a);
        if(a[0]=='.') {
            break;
        }
        while(a[j]!='.') {
            if(a[j]=='(') {
                s.push(1);
            } else if(a[j]==')'){
                if(s.empty()==1 || s.top()==2) {
                    m=0;
                    break;
                } else {
                    s.pop();
                }
            } else if(a[j]=='[') {
                s.push(2);
            } else if(a[j]==']'){
                if(s.empty()==1 || s.top()==1) {
                    m=0;
                    break;
                } else {
                    s.pop();
                }
            }
            j++;
        }
        if(m==1 && s.empty()==1) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}