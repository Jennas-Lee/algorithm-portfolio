#include <stdio.h>
#include <malloc.h>

int main() {
	int t, ti;

	scanf("%d", &t);

	for (ti = 1; ti <= t; ti++) {
		int n, result = 0, i;
		int* arr;

		scanf("%d", &n);

		arr = (int*)malloc(sizeof(int) * n);

		for (i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}

		for (i = 2; i < (n - 2); i++) {
			if (
				(arr[i - 2] < arr[i]) &&
				(arr[i - 1] < arr[i]) &&
				(arr[i + 1] < arr[i]) &&
				(arr[i + 2] < arr[i])
			) {
				int max = 0;

				if (arr[i - 2] > max) {
					max = arr[i - 2];
				}
				if (arr[i - 1] > max) {
					max = arr[i - 1];
				}
				if (arr[i + 1] > max) {
					max = arr[i + 1];
				}
				if (arr[i + 2] > max) {
					max = arr[i + 2];
				}

				result += (arr[i]-max);
			}
		}

		printf("#%d %d\n", ti, result);

		free(arr);
	}

	return 0;
}