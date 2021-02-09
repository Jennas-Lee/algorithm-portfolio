#include <iostream>
#include <stack>

using namespace std;

stack<int> s;
int n, a[1000010], m=0, i;

int main() {scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if(a[i]>m) {
            m=a[i];
        }
    }
    s.push(a[0]);
    for(i=1; i<=n; i++) {
        if(i==n) {
            printf("-1");
            return 0;
        } else if(s.size()==0) {
        	s.push(a[i]);
        }
        if(s.top()>=a[i]) {
            if(s.top()==m) {
                printf("-1 ");
                s.pop();
            } else {
                s.push(a[i]);
            }
        } else if(s.top()<a[i]) {
            while(s.size()>0) {
                printf("%d ", a[i]);
                s.pop();
            }
            s.push(a[i]);
        }
    }

    return 0;
}