#include <iostream>

int memo[31][31];

void f() {
    int i, j;

    for(i=0; i<31; i++) {
        memo[i][0]=1;
    }
    for(i=1; i<31; i++) {
        for(j=1; j<=i; j++) {
            memo[i][j]=memo[i-1][j-1]+memo[i-1][j];
        }
    }
}

int main() {
    int t, n, m, i, j;

    f();
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d", &n, &m);
        printf("%d\n", memo[m][n]);
    }

    return 0;
}