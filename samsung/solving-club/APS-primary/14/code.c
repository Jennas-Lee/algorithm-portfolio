#include <stdio.h>
 
int main() {
    int tc, i;
    int arr[10005];
 
    //freopen("input.txt", "r", stdin);
 
    scanf("%d", &tc);
    for (i = 0; i < tc; i++) {
        int tn, n, j, k, arr[10010], tmp;
 
        scanf("%d %d", &tn, &n);
        for (j = 0; j < n; j++) {
            char str[4];
 
            scanf("%s", str);
            if (str[0] == 'Z') {    // ZRO - 0
                arr[j] = 0;
            }
            else if (str[0] == 'O') {   // ONE - 1
                arr[j] = 1;
            }
            else if (str[1] == 'W') {   // TWO - 2
                arr[j] = 2;
            }
            else if (str[1] == 'H') {   // THR - 3
                arr[j] = 3;
            }
            else if (str[1] == 'O') {   // FOR - 4
                arr[j] = 4;
            }
            else if (str[2] == 'V') {   // FIV - 5
                arr[j] = 5;
            }
            else if (str[2] == 'X') {   // SIX- 6
                arr[j] = 6;
            }
            else if (str[1] == 'V') {   // SVN - 7
                arr[j] = 7;
            }
            else if (str[0] == 'E') {
                arr[j] = 8;
            }
            else if (str[0] == 'N') {
                arr[j] = 9;
            }
        }
 
        for (j = 0; j < n; j++) {
            for (k = 1; k < n; k++) {
                if (arr[k - 1] > arr[k]) {
                    tmp = arr[k - 1];
                    arr[k - 1] = arr[k];
                    arr[k] = tmp;
                }
            }
        }
 
        printf("#%d\n", tn);
        for (j = 0; j < n; j++) {
            switch (arr[j]) {
            case 0:
                printf("ZRO ");
                break;
 
            case 1:
                printf("ONE ");
                break;
 
            case 2:
                printf("TWO ");
                break;
 
            case 3:
                printf("THR ");
                break;
 
            case 4:
                printf("FOR ");
                break;
 
            case 5:
                printf("FIV ");
                break;
 
            case 6:
                printf("SIX ");
                break;
 
            case 7:
                printf("SVN ");
                break;
 
            case 8:
                printf("EGT ");
                break;
 
            case 9:
                printf("NIN ");
                break;
 
            }
        }
        printf("\n");
    }
 
 
    return 0;
}