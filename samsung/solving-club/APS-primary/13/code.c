#include <stdio.h>
 
int main() {
    int ti;
 
    for (ti = 1; ti <= 10; ti++) {
        int t, count = 0, i, j, k;
        int arr[105][105] = { 0, };
        scanf("%d", &t);
        for (i = 0; i < t; i++) {
            for (j = 0; j < t; j++) {
                scanf("%d", &arr[i][j]);
            }
        }
 
        for (i = -1; i <= t; i++) {  // 뻥 뚫려있는 경우 101번 수행하면 없어지게 됨
            for (j = 0; j < t; j++) {
                for (k = 0; k < t; k++) {
                    if (arr[j][k] == 1) {   // N극일 때
                        if (j == t - 1) {   // 테이블 끝에 있을 때
                            arr[j][k] = 0;  // 테이블 밖으로 넘어감
                        }
                        else if (arr[j + 1][k] == 0) {  // 밑에 아무것도 없을 때
                            arr[j][k] = 0;      // 원래 있던 위치에서 이동 시작
                            arr[j + 1][k] = 1;  // 이동 끝
                        }
                    }
                }
            }
            for (j = t - 1; j >=0; j--) {
                for (k = 0; k < t; k++) {
                    if (arr[j][k] == 2) {   // S극일 때
                        if (j == 0) {   // 테이블 끝에 있을 때
                            arr[j][k] = 0;  // 테이블 밖으로 넘어감
                        }
                        else if (arr[j - 1][k] == 0) {  // 위에 아무것도 없을 때
                            arr[j][k] = 0;
                            arr[j - 1][k] = 2;
                        }
                    }
                }
            }
        }
 
        //printf("\n");
 
        for (i = 0; i < t; i++) {
            for (j = 0; j < t; j++) {
                //printf("%d ", arr[i][j]);
                if (arr[i][j] == 1 && arr[i + 1][j] == 2) {
                    count += 1;
                }
            }
            //printf("\n");
        }
 
        printf("#%d %d\n", ti, count);
    }
 
    return 0;
}