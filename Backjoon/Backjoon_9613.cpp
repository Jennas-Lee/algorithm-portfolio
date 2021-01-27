#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    int t, n;

    if(a<b) {
        t=a;
        a=b;
        b=t;
    }

    while(b!=0) {
        n=a%b;
        a=b;
        b=n;
    }

    return a;
}

int main() {
    int n, m, i, j, k, t;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &m);

        vector<int> a;
        long long int s=0;
        for(j=0; j<m; j++) {
            scanf("%d", &t);
            a.push_back(t);
        }
        for(j=0; j<m-1; j++) {
            for(k=j+1; k<m; k++) {
                s+=gcd(a[j], a[k]);
            }
        }
        printf("%lld\n", s);
    }

    return 0;
}