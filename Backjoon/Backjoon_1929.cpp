#include <iostream>
#include <cmath>

int arr[1000010];

void f() {
    int i, j;
    
    for(i=2; i<=1000010; i++) {
        arr[i]=i;
    }

    for(i=2; i<=sqrt(1000010); i++) {
        if(arr[i]==0) {
            continue;
        }
        for(j=i*i; j<=1000010; j+=i) {
            arr[j]=0;
        }
    }
}

int main() {
    int n, m, i;

    scanf("%d %d", &n, &m);
    f();
    for(i=n; i<=m; i++) {
        if(arr[i]!=0) {
            printf("%d\n", i);
        }
    }

    return 0;
}