#include <iostream>

int main() {
    int n, i=1;

    scanf("%d", &n);

    while(n>i) {
        n-=i;
        i++;
    }
    i+=1;
    if(i%2==0) {
        printf("%d/%d", i-n, n);
    } else {
        printf("%d/%d", n, i-n);
    }

    return 0;
}