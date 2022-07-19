#include <stdio.h>

int main() {
	int tc;

	for (tc = 1; tc <= 10; tc++) {
		int arr[100][100], i, j, sum, max = 0, t;

		scanf("%d", &t);

		for (i = 0; i < 100; i++) {
			for (j = 0; j < 100; j++) {
				scanf("%d", &arr[i][j]);
			}
		}

		// width
		for (i = 0; i < 100; i++) {
			sum = 0;
			for (j = 0; j < 100; j++) {
				sum += arr[i][j];
			}
			if (sum > max) {
				max = sum;
			}
		}

		// height
		for (i = 0; i < 100; i++) {
			sum = 0;
			for (j = 0; j < 100; j++) {
				sum += arr[j][i];
			}
			if (sum > max) {
				max = sum;
			}
		}

		// left to right
		sum = 0;
		for (i = 0; i < 100; i++) {
			sum += arr[i][100 - 1 - i];
		}
		if (sum > max) {
			max = sum;
		}

		// right to left
		sum = 0;
		for (i = 0; i < 100; i++) {
			sum += arr[100 - 1 - i][i];
		}
		if (sum > max) {
			max = sum;
		}

		printf("#%d %d\n", tc, max);
	}

	return 0;
}