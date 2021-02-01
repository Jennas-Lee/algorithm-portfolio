#include <iostream>

int main() {
    int a, b, c, d, p, x, y;
    
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &p);
    x=a*p;
    if(c>=p) {
        y=b;
    } else {
        y=b+d*(p-c);
    }
    printf("%d", x < y ? x : y);

    return 0;
    
}