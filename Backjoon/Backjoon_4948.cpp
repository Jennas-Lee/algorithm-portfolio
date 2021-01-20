#include <iostream>
#include <cmath>

int arr[246917];

void f() {
    int i, j;
    
    for(i=2; i<=246917; i++) {
        arr[i]=i;
    }

    for(i=2; i<=sqrt(246917); i++) {
        if(arr[i]==0) {
            continue;
        }
        for(j=i*i; j<=246917; j+=i) {
            arr[j]=0;
        }
    }
}

int main() {
    int n, i;
    
    f();
    while(1) {
        scanf("%d", &n);

        if(n==0) {
            break;
        } else {
            int s=0;
            for(i=n+1; i<=2*n; i++) {
                if(arr[i]!=0) {
                    s++;
                }
            }
            printf("%d\n", s);
        }
    }

    return 0;
}