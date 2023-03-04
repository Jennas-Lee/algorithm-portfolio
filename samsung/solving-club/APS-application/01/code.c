#include <stdio.h>
#include <string.h>
#include <math.h>

int bitmasking(char bit[]) {
	int result = 0, i;

	for (i = 0; i < 7; i++) {
		if (bit[6 - i] == '1') {
			result += (int)pow(2, i);
		}
	}

	switch (result) {
	case 13:
		return 0;
	case 25:
		return 1;
	case 19:
		return 2;
	case 61:
		return 3;
	case 35:
		return 4;
	case 49:
		return 5;
	case 47:
		return 6;
	case 59:
		return 7;
	case 55:
		return 8;
	case 11:
		return 9;
	default:
		return -1;
	}
}

int validate(int code[]) {
	return (((code[0] + code[2] + code[4] + code[6]) * 3 + (code[1] + code[3] + code[5])) + code[7]);
}

int sum(int code[]) {
	int sum = 0, i;

	for (i = 0; i < 8; i++) {
		sum += code[i];
	}

	return sum;
}

int get_code(char str[], int M) {
	int i_limit, i, j, k;

	if (M % 7 == 0) {
		i_limit = 7;
	}
	else {
		i_limit = M % 7;
	}

	for (i = 0; i < M - 56; i++) {
		int code[8] = { 0, };
		for (j = 0; j < 8; j++) {
			int now_code;
			char tmp[8] = { 0, };
			for (k = 0; k < 7; k++) {
				//printf("%c", str[i + j * 7 + k]);
				tmp[k] = str[i + j * 7 + k];
			}
			//printf(" ");
			//printf("%d ", bitmasking(tmp));
			now_code = bitmasking(tmp);

			if (now_code == -1) {	// -1, 즉 잘못된 코드면 다음 턴으로 넘어감
				code[0] = -1;

				break;
			}
			else {	// 올바른 코드면 일단 저장
				code[j] = now_code;
			}
		}

		if (code[0] == -1) {
			continue;
		}
		else {
			if (validate(code) % 10 == 0) {	// 10의 배수
				//printf("%d\n", sum(code));
				return sum(code);
			}
			else {
				return 0;
			}
		}
		//printf("\n");
	}
}

int main() {
	int tc, tci;

	scanf("%d", &tc);
	for (tci = 1; tci <= tc; tci++) {
		int N, M, is_code = 0, i, j, k;
		char str[105] = { 0, }, tmp[105];

		scanf("%d %d", &N, &M);
		for (i = 0; i < N; i++) {
			scanf("%s", &tmp);
			if (is_code == 0) {
				for (j = 0; j < M; j++) {
					if (tmp[j] == '1') {
						is_code = 1;
						break;
					}
				}
				if (is_code == 1) {
					strcpy(str, tmp);
				}
			}
		}

		//get_code(str, M);
		printf("#%d %d\n", tci, get_code(str, M));
		//printf("%s", str);
	}

	return 0;
}