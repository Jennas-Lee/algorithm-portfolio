#include <iostream>
#include <cmath>

int arr[3170];

void f(int n) {
    int i, j;
    
    for(i=2; i<=3165; i++) {
        arr[i]=i;
    }

    for(i=2; i<=sqrt(3165); i++) {
        if(arr[i]==0) {
            continue;
        }
        for(j=i*i; j<=3165; j+=i) {
            arr[j]=0;
        }
    }
}

int main() {
    int n, t, i=2;

    scanf("%d", &n);
    t=n;
    f(n);
    while(sqrt(n)>1) {
        if(i==n) {
            printf("%d", n);
            return 0;
        }
        if(n%i==0) {
            if(arr[i]!=0) {
                n/=i;
                printf("%d\n", i);
                i=2;
            } else {
                i++;
            }
        } else {
            i++;
        }
    }

    return 0;
}