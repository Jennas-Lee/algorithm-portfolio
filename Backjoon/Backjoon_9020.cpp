#include <iostream>
#include <cmath>

int arr[10010];

void f() {
    int i, j;
    
    for(i=2; i<=10010; i++) {
        arr[i]=i;
    }

    for(i=2; i<=sqrt(10010); i++) {
        if(arr[i]==0) {
            continue;
        }
        for(j=i*i; j<=10010; j+=i) {
            arr[j]=0;
        }
    }
}

int main() {
    int n, m, i, j;
    
    scanf("%d", &n);
    f();
    for(i=0; i<n; i++) {
        int a, b, m=10000;
        scanf("%d", &m);
        for(j=2; j<=m/2+1; j++) {
            if(arr[j]!=0 && arr[m-j]!=0) {
                if((m-j-j)<m && j<=(m-j)) {
                    a=j, b=m-j;
                }
            }
        }
        printf("%d %d\n", a, b);
    }

    return 0;
}