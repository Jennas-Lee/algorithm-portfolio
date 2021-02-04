#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    stack<bool> s;
    string q;

    while(1) {
        getline(cin, q);
        if(q.compare(string("고무오리 디버깅 시작"))==0) {
            continue;
        } else if(q.compare(string("문제"))==0) {
            s.push(true);
        } else if(q.compare(string("고무오리"))==0) {
            if(s.size()==0) {
                s.push(true);
                s.push(true);
            } else {
                s.pop();
            }
        } else {
            break;
        }
    }
    if(s.size()==0) {
        printf("고무오리야 사랑해");
    } else {
        printf("힝구");
    }

    return 0;
}