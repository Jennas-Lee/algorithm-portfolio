#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    int n, m, r=0, i;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &m);
        if(m==0) {
            r-=s.top();
            s.pop();
        } else {
            s.push(m);
            r+=m;
        }
    }
    printf("%d", r);

    return 0;
}