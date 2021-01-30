#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[5], s=0, i;

    for(i=0; i<5; i++) {
        scanf("%d", &a[i]);
        s+=a[i];
    }
    sort(a, a+5);

    printf("%d\n%d", s/5, a[2]);

    return 0;
}