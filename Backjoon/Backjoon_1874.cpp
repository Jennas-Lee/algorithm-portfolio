#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    stack<int> s;
    vector<char> v;
    int n, m, t=0, i;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &m);
        while(m>t) {
            s.push(++t);
            v.push_back('+');
        }
        if(s.top()!=m) {
            printf("NO");
            return 0;
        } else {
            s.pop();
            v.push_back('-');
        }
    }
    for(i=0; i<v.size(); i++) {
        printf("%c\n", v.at(i));
    }

    return 0;
}