#include <iostream>
#include <cstring>

int main() {
    int i=0, j;
    char a[101];

    scanf("%s", a);
    while(1) {
        for(j=0; j<10; j++) {
            if(a[i*10+j]=='\0') {
                return 0;
            } else {
                printf("%c", a[i*10+j]);
            }
        }
        printf("\n");
        i++;
    }

    return 0;
}