#include <iostream>

int main() {
    int t, a, b, s, i;

    scanf("%d", &t);
    for(i=0; i<t; i++) {
        s=0;
        scanf("%d %d", &a, &b);
        if(a!=0) {
            if(a<=1) {
                s+=5000000;
            }  else if(a<=3) {
                s+=3000000;
            } else if(a<=6) {
                s+=2000000;
            } else if(a<=10) {
                s+=500000;
            } else if(a<=15) {
                s+=300000;
            } else if(a<=21) {
                s+=100000;
            }
        }
        if(b!=0) {
            if(b<=1) {
                s+=5120000;
            } else if(b<=3) {
                s+=2560000;
            } else if(b<=7) {
                s+=1280000;
            } else if(b<=15) {
                s+=640000;
            } else if(b<=31) {
                s+=320000;
            }
        }

        printf("%d\n", s);
    }

    return 0;
}