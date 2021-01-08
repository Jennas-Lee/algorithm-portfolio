#include <stdio.h>

int main() {
    int a, b, c, r, i, arr[10]={};


    scanf("%d %d %d", &a, &b, &c);
    r=a*b*c;

    while(r>0) {
        arr[r%10]++;
        r/=10;
    }
    for(i=0; i<10; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}