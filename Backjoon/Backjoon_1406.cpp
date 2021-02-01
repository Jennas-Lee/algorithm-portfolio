#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    stack<char> front, back;
    string q;
    int n, i;
    char c, front_result[600010];

    while(1) {
        c=getchar();
        if(c=='\n') {
            break;
        } else {
            front.push(c);
        }
    }
    scanf("%d\n", &n);
    for(i=0; i<n; i++) {
        getline(cin, q);
        if(q[0]=='P') {
            front.push(q[2]);
        } else if(q[0]=='L') {
            if(front.size()!=0) {
                c=front.top();
                front.pop();
                back.push(c);
            }
        } else if(q[0]=='D') {
            if(back.size()!=0) {
                c=back.top();
                back.pop();
                front.push(c);
            }
        } else if(q[0]=='B') {
            if(front.size()!=0) {
                front.pop();
            }
        }
    }
    i=0;
    while(front.size()!=0) {
        front_result[i++]=front.top();
        front.pop();
    }
    for(i-=1; i>=0; i--) {
        printf("%c", front_result[i]);
    }
    while(back.size()!=0) {
        printf("%c", back.top());
        back.pop();
    }

    return 0;
}