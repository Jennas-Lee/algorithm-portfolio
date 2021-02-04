#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    int i, j, l;

    scanf("%d\n", &i);
    for(i=1; i<=5; i++) {
        stack<string> s;
        string t;
        char c[26];
        int k=0;
        getline(cin, t);
        for(j=0; j<=t.size(); j++) {
            if(t[j]==' ' || j==t.size()) {
                k=0;
                s.push(string(c));
                for(l=0; l<26; l++) {
                    c[l]='\0';
                }
            } else {
                c[k++]=t[j];
            }
        }
        printf("Case #%d: ", i);
        while(s.size()>0) {
            printf("%s ", s.top().c_str());
            s.pop();
        }
        printf("\n");
    }

    return 0;
}