#include <iostream>

int main() {
    char c;

    while(c!='\n') {
        scanf("%c", &c);
        if(65<=c && c<=90) {
            printf("%c", c);
        }
    }

    return 0;
}