#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    int n, m, i;
    char q[6];

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%s", q);
        if(strcmp(q, "push")==0) {
            scanf("%d", &m);
            s.push(m);
        } else if(strcmp(q, "pop")==0) {
            if(s.empty()==1) {
                printf("-1\n");
            } else {
                printf("%d\n", s.top());
                s.pop();
            }
        } else if(strcmp(q, "size")==0) {
            printf("%d\n", s.size());
        } else if(strcmp(q, "empty")==0) {
            printf("%d\n", s.empty());
        } else {
            if(s.empty()==1) {
                printf("-1\n");
            } else {
                printf("%d\n", s.top());
            }
        }
    }

    return 0;
}