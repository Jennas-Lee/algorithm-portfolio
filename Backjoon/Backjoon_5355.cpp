#include <iostream>

int main() {
    int t, i;

    scanf("%d", &t);
    for(i=0; i<t; i++) {
        double m;
        char c;
        scanf("%lf", &m);
        while(1) {
            scanf("%c", &c);
            if(c=='\n') {
                break;
            } else if(c=='@') {
                m*=3.0;
            } else if(c=='%') {
                m+=5.0;
            } else if(c=='#') {
                m-=7.0;
            } else {
                continue;
            }
        }
        printf("%.2lf\n", m);
    }

    return 0;
}