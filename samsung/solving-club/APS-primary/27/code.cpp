#include <cstdio>
#include <cstdlib>
#include <stack>

using namespace std;

int main() {
	int tc;

	for (tc = 1; tc <= 10; tc++) {
		int n, i;
		char str[105];
		stack<int> s;

		scanf("%d %s", &n, &str);
		//printf("%d %s\n", n, str);
		for (i = 0; i < n; i++) {
			int now = str[i] - 48;
			if (s.empty()) {	// 스택이 비었을 경우
				s.push(now);	// 무조건 푸시
				//printf("push %d\n", now);
			}
			else if (now == s.top()) {	// 팰린드롬일경우
				s.pop();	// 소거
			}
			else {	// 아무것도 아닌 경우
				s.push(now);	// 푸시
			}
		}

		i = 0;
		while (!s.empty()) {
			//printf("%d", s.top());
			str[i] = s.top();
			s.pop();
			i += 1;
		}

		printf("#%d ", tc);
		for (i -= 1; i >= 0; i--) {
			printf("%d", str[i]);
		}
		printf("\n");
	}

	return 0;
}