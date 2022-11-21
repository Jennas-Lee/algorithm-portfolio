#include <stdio.h>

typedef struct {
	int sum;
	int x;
} Ladder_result;

Ladder_result ladder(int arr[][100], int x) {
	Ladder_result result;
	int sum = 0, y = 0, start = x;
	int down_or_side = 0; // 0 : down | 1 : side
	int left_or_right = 0; // 0 : left | 1 : right

	while (y < 100) {
		if (down_or_side == 0) { // go down
			if (x != 0 && arr[y][x - 1] == 1) {	// can go left
				down_or_side = 1;	// turn to side
				left_or_right = 0;	// go to left
				x -= 1;	// move to left
				sum += 1;
			}
			else if (x != 99 && arr[y][x + 1] == 1) {	//can go right
				down_or_side = 1;	// turo to side
				left_or_right = 1;	// go to right
				x += 1;	// move to right
				sum += 1;
			}
			else {	// can't move left or right, just down
				y += 1;	// move to down
				sum += 1;
			}
		}
		else {	// go left or right
			if (x == 0 || (left_or_right == 0 && arr[y][x - 1] == 0)) {	// can't go left
				down_or_side = 0;	// turn to down
				y += 1;	// move to down
				sum += 1;
			}
			else if (x == 99 || (left_or_right == 1 && arr[y][x + 1] == 0)) {	// can't go right
				down_or_side = 0;	// turn to down
				y += 1;	// move to down
				sum += 1;
			}
			else {	// can go left or right
				if (left_or_right == 0) {
					x -= 1;
					sum += 1;
				}
				else {
					x += 1;
					sum += 1;
				}
			}
		}
		//printf("down_or_side : %d | left_or_right : %d | y : %d | x : %d\n", down_or_side, left_or_right, y, x);
	}

	result.sum = sum;
	result.x = x;

	//printf("\tstart : %d | sum : %d\n", start, result.sum);

	return result;
}

int main() {
	int ti;

	for (ti = 0; ti < 10; ti++) {
		int t, arr[100][100] = {0,}, min = 100000000, min_x = 0, i, j;

		scanf("%d", &t);
		for (i = 0; i < 100; i++) {
			for (j = 0; j < 100; j++) {
				scanf("%d", &arr[i][j]);
			}
		}

		for (i = 0; i < 100; i++) {
			if (arr[0][i] == 0) {	// cannot start because 0
				continue;
			}
			else {
				Ladder_result result = ladder(arr, i);

				if (result.sum <= min) {
					min = result.sum;
					min_x = i;
					//printf("min : %d | x : %d\n", min, min_x);
				}
			}
		}

		printf("#%d %d\n", t, min_x);
	}

	return 0;
}