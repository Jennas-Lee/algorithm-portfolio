#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;

    while(1) {
        cin >> s;
        if(s[0]=='0') {
            break;
        } else {
            string s2=s;
            reverse(s.begin(), s.end());
            if(s.compare(s2)==0) {
                printf("yes\n");
            } else {
                printf("no\n");
            }
        }
    }

    return 0;
}