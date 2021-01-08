#include <stdio.h>

int main() {
    int n, m=0, i;
    double arr[1010], s=0;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%lf", &arr[i]);
        if(arr[i]>(double)m) m=arr[i];
    }
    for(i=0; i<n; i++) {
        arr[i]=arr[i]/(double)m*100;
        s+=arr[i];
    }
    printf("%lf", s/n);

    return 0;
}