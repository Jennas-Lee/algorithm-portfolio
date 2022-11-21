#include <stdio.h>

int fac(int n, int c) {
	if (c == 1) {
		return n;
	}

	return n * fac(n, c - 1);
}

int main() {
	int ti;

	for (ti = 1; ti <= 10; ti++) {
		int t, n, c;

		scanf("%d", &t);
		scanf("%d %d", &n, &c);

		printf("#%d %d\n", t, fac(n, c));
	}

	return 0;
}