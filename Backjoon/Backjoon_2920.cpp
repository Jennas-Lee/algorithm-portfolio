#include <iostream>

int main() {
    int n, i;

    scanf("%d", &n);
    if(n==1) {
        for(i=2; i<9; i++) {
            scanf("%d", &n);
            if(n!=i) {
                printf("mixed");
                return 0;
            }
        }
        printf("ascending");
    } else if(n==8) {
        for(i=7; i>0; i--) {
            scanf("%d", &n);
            if(n!=i) {
                printf("mixed");
                return 0;
            }
        }
        printf("descending");
    } else {
        printf("mixed");
    }

    return 0;
}