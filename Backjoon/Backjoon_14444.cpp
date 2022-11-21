#include <iostream>
#include <cstring>

char s[100010], pre_s[200010];
int answer[200010];
int len;

int min(int a, int b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}

void pre_processing() {
	int s_len, i, j;

	s_len = strlen(s);
	j = 0;

	for (i = 0; i < s_len; j++) {
		if (j % 2 == 0) {	// #이 들어갈 순서이면
			pre_s[j] = '#';	// # 삽입
		}
		else {	// 문자가 들어갈 순서이면
			pre_s[j] = s[i];	// 문자 삽입
			i++;	// 문자 한칸 이동
		}
	}
	pre_s[j] = '#';	// 마지막에 # 삽입
}

void mana() {
	int r, p, i;

	len = strlen(pre_s);
	r = 0, p = 0;

	for (i = 0; i < len; i++) {
		if (i <= r) {
			answer[i] = min(answer[2 * p - i], r - i);
		}
		else {
			answer[i] = 0;
		}

		while (i - answer[i] - 1 >= 0 && i + answer[i] + 1 < len && pre_s[i - answer[i] - 1] == pre_s[i + answer[i] + 1]) {
			answer[i] += 1;
		}

		if (r < i + answer[i]) {
			r = i + answer[i];
			p = i;
		}
	}
}

int main() {
	int max = 0, i;

	scanf("%s", s);

	pre_processing();

	//printf("%s\n", pre_s);

	mana();

	for (i = 0; i < len; i++) {
		if (max < answer[i]) {
			max = answer[i];
		}
	}

	printf("%d", max);

	return 0;
}
