#include <stdio.h>

int main() {
	int ti;

	for (ti = 0; ti < 10; ti++) {
		int t, arr[100][100] = {0, }, end_x, i, j;

		scanf("%d", &t);

		for (i = 0; i < 100; i++) {
			for (j = 0; j < 100; j++) {
				scanf("%d", &arr[i][j]);

				if (arr[i][j] == 2) {
					end_x = j;
				}
			}
		}

		i = 99, j = end_x;
		int up_or_side = 0;			// 0 : up, 1 : side
		int left_or_right = 0;		// 0 : left, 1 : right

		while (i > 0) {
			if (up_or_side == 1) {	// side
				if ((left_or_right == 0 && arr[i][j - 1] == 0) || j == 0) {	// cannot go left
					up_or_side = 0;
					i -= 1;
				}
				else if ((left_or_right == 1 && arr[i][j + 1] == 0) || j == 99) {	// cannot go right
					up_or_side = 0;
					i -= 1;
				}
				else {	// can go left or right
					if (left_or_right == 0) {	// continue to go left
						j -= 1;
					}
					else {	// continue to go right
						j += 1;
					}
				}
			}
			else { // up
				if (j != 0 && arr[i][j - 1] == 1) {	// can turn to left
					up_or_side = 1;
					left_or_right = 0;
					j -= 1;
				}
				else if (j != 99 && arr[i][j + 1] == 1) {	// can turn to right
					up_or_side = 1;
					left_or_right = 1;
					j += 1;
				}
				else {	// go up
					i -= 1;
				}
			}
			//printf("up_or_side : %d | left_or_right : %d | i : %d | j : %d\n", up_or_side, left_or_right, i, j);
		}

		printf("#%d %d\n", t, j);
	}

	return 0;
}