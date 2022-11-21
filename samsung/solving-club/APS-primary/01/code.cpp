#include <cstdio>

int main() {
    int testcase;

    for (testcase = 1; testcase <= 10; testcase++) {
        int n, max_count = 0, max_value, t, i;
        int num[101] = {};

        scanf("%d", &n);
        for (i = 0; i < 1000; i++) {
            scanf("%d", &t);
            num[t]++;
        }

        for (i = 0; i <= 100; i++) {
            if (max_count <= num[i]) {
                max_count = num[i];
                max_value = i;
            }
        }

        printf("#%d %d\n", testcase, max_value);
    }

    return 0;
}