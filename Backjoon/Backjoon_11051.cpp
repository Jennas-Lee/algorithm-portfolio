#include <iostream>

int arr[1010][1010], i, j;

int ncr(int n, int r) {
    for(i=0; i<=n; i++) {
        for(j=0; j<=r; j++) {
            if(i==j || j==0) {
                arr[i][j]=1;
            } else {
                arr[i][j]=arr[i-1][j-1]%10007+arr[i-1][j]%10007;
            }
        }
    }

    return arr[n][r]%10007;
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    printf("%d", ncr(n, k));

    return 0;
}