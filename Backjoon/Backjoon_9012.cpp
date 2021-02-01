#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, m, i, j;
    char a[51];

    scanf("%d", &n);
    for(i=0; i<n; i++) {
    	stack<bool> s;
        j=0, m=1;
        scanf("%s", a);
        while(a[j]!='\0') {
            if(a[j]=='(') {
                s.push(1);
            } else {
                if(s.empty()==1) {
                    m=0;
                    break;
                } else {
                    s.pop();
                }
            }
            j++;
        }
        if(m==1 && s.empty()==1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}