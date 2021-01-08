#include <stdio.h>

int main() {
    int a, r=0, arr[45]={}, i;

    for(i=0; i<10; i++) {
        scanf("%d", &a);
        if(arr[a%42]==0) r++;
        arr[a%42]++;
    }

    printf("%d", r);

    return 0;
}