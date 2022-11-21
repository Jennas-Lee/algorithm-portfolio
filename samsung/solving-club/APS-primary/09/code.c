#include <stdio.h>
#include <malloc.h>
 
int min(int a, int b) {
    if (a <= b) {
        return a;
    }
    else {
        return b;
    }
}
 
int main() {
    int ti;
 
    for (ti = 1; ti <= 10; ti++) {
        int t, p_max = 0, i, j, k;
        char arr[101][101];
 
        scanf("%d", &t);
        for (i = 0; i < 100; i++) {
            scanf("%s", arr[i]);
        }
 
        for (i = 0; i < 100; i++) {
            int max = 0;
            // row
            char sentence[201] = {'#',};
            int mana[201] = {0,};
            int r = -1, c = -1;
 
            for (j = 1, k = 0; j <= 201; j++) {
                if (j % 2 == 0) {
                    sentence[j] = '#';
                }
                else {
                    sentence[j] = arr[i][k];
                    k += 1;
                }
            }
 
            for (j = 0; j < 201; j++) {
                if (j <= r) {
                    mana[j] = min(j - r, mana[c + (c - r)]);
                }
 
                while (j + mana[j] + 1 < 201 && j - mana[j] - 1 >= 0 && sentence[j + mana[j] + 1] == sentence[j - mana[j] - 1]) {
                    mana[j] += 1;
                }
 
                if (j + mana[j] > r) {
                    c = j;
                    r = j + mana[j];
                }
            }
 
            for (j = 0; j <= 201; j++) {
                if (mana[j] > p_max) {
                    p_max = mana[j];
                }
            }
 
            // col
            // init
            r = -1, c = -1;
            for (j = 0; j < 201; j++) {
                mana[j] = 0;
                sentence[j] = 0;
            }
 
            for (j = 1, k = 0; j <= 201; j++) {
                if (j % 2 == 0) {
                    sentence[j] = '#';
                }
                else {
                    sentence[j] = arr[k][i];
 
                    k += 1;
                }
            }
 
            for (j = 0; j < 201; j++) {
                if (j <= r) {
                    mana[j] = min(j - r, mana[c + (c - r)]);
                }
 
                while (j + mana[j] + 1 < 201 && j - mana[j] - 1 >= 0 && sentence[j + mana[j] + 1] == sentence[j - mana[j] - 1]) {
                    mana[j] += 1;
                }
 
                if (j + mana[j] > r) {
                    c = j;
                    r = j + mana[j];
                }
            }
 
            for (j = 0; j <= 201; j++) {
                if (mana[j] > p_max) {
                    p_max = mana[j];
                }
            }
        }
 
        printf("#%d %d\n", t, p_max);
    }
 
    return 0;
}