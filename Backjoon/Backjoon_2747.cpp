#include <iostream>

int memo[100]={0, 1};
int f(int n) {
    if(memo[n]>0) {
        return memo[n];
    } else if(n<2) {
        return n;
    } else {
        return memo[n]=f(n-1)+f(n-2);
    }
}

int main() {
    int n;

    scanf("%d", &n);
    f(n);
    printf("%d", memo[n]);
    
    return 0;
}