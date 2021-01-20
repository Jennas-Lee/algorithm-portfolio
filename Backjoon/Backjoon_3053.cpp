#include <iostream>
#include <cmath>

int main() {
    const double PI=std::acos(-1);
    int r;

    scanf("%d", &r);
    printf("%lf\n%lf", r*r*PI, r*r*2.0);
    
    return 0;
}