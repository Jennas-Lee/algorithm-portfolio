#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, i, j;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        string a, b;
        cin >> a >> b;
        printf("Distances: ");
        for(j=0; j<a.length(); j++) {
            printf("%d ", b.at(j)>=a.at(j)?b.at(j)-a.at(j):b.at(j)+26-a.at(j));
        }
        printf("\n");
    }

    return 0;
}