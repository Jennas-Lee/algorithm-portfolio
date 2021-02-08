#include <iostream>

int n, x, y, q1, q2, q3, q4, axis, i;

int main() {
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &x, &y);
        if(x==0 || y==0) {
            axis++;
        } else if(x>0 && y>0) {
            q1++;
        } else if(x>0 && y<0) {
            q4++;
        } else if(x<0 && y<0) {
            q3++;
        } else {
            q2++;
        }
    }

    printf("Q1: %d\n", q1);
    printf("Q2: %d\n", q2);
    printf("Q3: %d\n", q3);
    printf("Q4: %d\n", q4);
    printf("AXIS: %d\n", axis);

    return 0;
}