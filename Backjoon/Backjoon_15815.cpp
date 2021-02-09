#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    char c;
    int a, b;

    while(1) {
        scanf("%c", &c);
        if(c=='\n') {
            break;
        }
        if(48<=c && c<=57) {
            s.push(c-48);
        } else {
            switch(c) {
                case '+':
                    b=s.top();
                    s.pop();
                    a=s.top();
                    s.pop();
                    s.push(a+b);
                    break;
                case '-':
                    b=s.top();
                    s.pop();
                    a=s.top();
                    s.pop();
                    s.push(a-b);
                    break;
                case '*':
                    b=s.top();
                    s.pop();
                    a=s.top();
                    s.pop();
                    s.push(a*b);
                    break;
                case '/':
                    b=s.top();
                    s.pop();
                    a=s.top();
                    s.pop();
                    s.push(a/b);
                    break;
            }
        }
    }
    printf("%d", s.top());

    return 0;
}