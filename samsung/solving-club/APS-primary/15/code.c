#include <stdio.h>

int main() {
	int tc;

	for (tc = 1; tc <= 10; tc++) {
		int length, sum = 0, i;
		char t;

		scanf("%d\n", &length);
		for (i = 0; i < length; i++) {
			scanf("%c", &t);
			if (t == '+') {
				continue;
			}
			else {
				sum += (t - 48);
			}
		}

		printf("#%d %d\n", tc, sum);
	}

	return 0;
}