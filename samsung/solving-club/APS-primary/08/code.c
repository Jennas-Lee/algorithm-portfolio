#include <stdio.h>
#include <malloc.h>

int compare(char* original, char* reverse, int length) {
	for (; length >= 0; length--) {
		if (original[length] != reverse[length]) {
			return 0;
		}
	}

	return 1;
}

char* reverse(char* original) {
	int length = 0, i;

	for (i = 0; original[i] != '\0'; i++) {
		length += 1;
	}

	char* reverse_string = (char*)malloc(sizeof(char) * length + 1);

	for (i = 0; i < length; i++) {
		reverse_string[i] = original[length - i - 1];
	}
	reverse_string[i] = '\0';

	return reverse_string;
}

int main() {
	int ti;

	for (ti = 1; ti <= 10; ti++) {
		int pallindrome_length, count = 0, i, j, k;
		char arr[8][9];

		
		scanf("%d", &pallindrome_length);
		for (i = 0; i < 8; i++) {
			scanf("%s", arr[i]);
		}

		// row
		for (i = 0; i < 8; i++) {
			for (j = 0; j <= 8 - pallindrome_length; j++) {
				char* original = (char*)malloc(sizeof(char) * pallindrome_length + 1);

				for (k = 0; k < pallindrome_length; k++) {
					original[k] = arr[i][j + k];
				}
				original[k] = '\0';

				if (compare(original, reverse(original), pallindrome_length/2)) {
					count += 1;
				}

				free(original);
			}
		}

		// col
		for (i = 0; i < 8; i++) {
			for (j = 0; j <= 8 - pallindrome_length; j++) {
				char* original = (char*)malloc(sizeof(char) * pallindrome_length + 1);

				for (k = 0; k < pallindrome_length; k++) {
					original[k] = arr[j + k][i];
				}
				original[k] = '\0';

				if (compare(original, reverse(original), pallindrome_length / 2)) {
					count += 1;
				}

				free(original);
			}
		}

		printf("#%d %d\n", ti, count);
	}

	return 0;
}