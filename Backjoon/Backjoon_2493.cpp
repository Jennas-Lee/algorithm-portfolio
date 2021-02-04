#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> main, t;
    int n, m, i;

    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        scanf("%d", &m);
        while(main.size()>=0) {
            if(main.size()==0) {
                printf("0 ");
                main.push(m);
                t.push(i);
                break;
            } else if(main.top()>=m) {
                printf("%d ", t.top());
                main.push(m);
                t.push(i);
                break;
            } else {
                main.pop();
                t.pop();
            }
        }
    }

    return 0;
}