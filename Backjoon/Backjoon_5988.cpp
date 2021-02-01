#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, i;
    string k;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        cin >> k;
        if(k.back()%2==0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }

    return 0;
}