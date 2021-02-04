#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> main, t;
    int n, a[1000005], r[1000005], i, j=0;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for(i=n-1; i>=0; i--) {
        while(main.size()>=0) {
            if(main.size()==0) {
                // printf("-1 ");
                r[j++]=-1;
                main.push(a[i]);
                t.push(i);
                break;
            } else if(main.top()>=a[i]) {
                // printf("%d ", main.top());
                r[j++]=main.top();
                main.push(a[i]);
                t.push(i);
                break;
            } else {
                main.pop();
                t.pop();
            }
        }
    }
    for(j-=1; j>=0; j--) {
        printf("%d ", r[j]);
    }

    return 0;
}