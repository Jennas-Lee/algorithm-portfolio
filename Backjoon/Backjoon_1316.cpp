#include <iostream>

using namespace std;

int main() {
    int n, r=0, i;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        string s;
        
        cin >> s;
        int t[26]={}, e=s.size(), j;
        t[s.at(0)-97]=1;

        for(j=1; j<e; j++) {
            if(s.at(j-1) == s.at(j) && t[s.at(j)-97]==1) {
                continue;
            } else if(t[s.at(j)-97]!=0) {
                r-=1;
                break;
            } else {
                t[s.at(j)-97]=1;
                continue;
            }
        }
        r++;
    }

    printf("%d", r);

    return 0;
}