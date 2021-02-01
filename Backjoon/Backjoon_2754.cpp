#include <iostream>

int main() {
    double s;
    char a, b;

    scanf("%c%c", &a, &b);
    if(a=='A') {
        if(b=='+') {
            s=4.3;
        } else if(b=='0') {
            s=4.0;
        } else {
            s=3.7;
        }
    } else if(a=='B') {
        if(b=='+') {
            s=3.3;
        } else if(b=='0') {
            s=3.0;
        } else {
            s=2.7;
        }
    } else if(a=='C') {
        if(b=='+') {
            s=2.3;
        } else if(b=='0') {
            s=2.0;
        } else {
            s=1.7;
        }
    } else if(a=='D') {
        if(b=='+') {
            s=1.3;
        } else if(b=='0') {
            s=1.0;
        } else {
            s=0.7;
        }
    } else {
        s=0;
    }
    printf("%.1lf", s);

    return 0;
}