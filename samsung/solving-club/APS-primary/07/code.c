#include <stdio.h>

int main() {
	int ti;

	for (ti = 0; ti < 10; ti++) {
		int t, count = 0, search_len = 0, sentence_len = 0, i, j;
		char search[11], sentence[1010];

		scanf("%d", &t);

		scanf("%s", search);
		scanf("%s", sentence);

		for (i = 0; search[i] != '\0'; i++) {
			search_len++;
		}

		for (i = 0; sentence[i] != '\0'; i++) {
			sentence_len++;
		}

		for (i = 0; i < sentence_len - search_len; i++) {
			for (j = 0; j <= search_len; j++) {
				if (j == search_len) {
					count++;
					break;
				}
				else if (search[j] != sentence[i + j]) {
					break;
				}
				else {
					continue;
				}
			}
		}

		printf("#%d %d\n", t, count);
	}

	return 0;
}