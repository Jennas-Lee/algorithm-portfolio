#include <stdio.h>

int main() {
	int ti;

	for (ti = 1; ti <= 10; ti++) {
		int dump, arr[100], max=0, maxlocation, min=100, minlocation, i, j;

		scanf("%d", &dump);
		for (i = 0; i < 100; i++) {
			scanf("%d", &arr[i]);
		}

		for (i = 0; i <= dump; i++) {
			// Complete to dump
			if (max == min) {
				break;
			}
			else {
				max = 0, min = 100;
				for (j = 0; j < 100; j++) {
					if (arr[j] > max) {
						max = arr[j];
						maxlocation = j;
					}
					if (arr[j] < min) {
						min = arr[j];
						minlocation = j;
					}
				}

				arr[maxlocation] -= 1;
				arr[minlocation] += 1;
			}
		}

		printf("#%d %d\n", ti, (max - min));
	}

	return 0;
}