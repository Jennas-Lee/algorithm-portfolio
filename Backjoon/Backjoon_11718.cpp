#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    while(!cin.eof()) {
        getline(cin, s);
        printf("%s\n", s.c_str());
    }

    return 0;
}