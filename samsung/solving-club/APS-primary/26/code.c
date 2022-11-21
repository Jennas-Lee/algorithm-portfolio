#include <stdio.h>
#include <stdlib.h>

typedef struct {
	double data[1010];
	int ptr;
} Stack;

Stack stack;

void init() {
	stack.ptr = 0;
}

void push(double data) {
	stack.data[stack.ptr] = data;
	stack.ptr += 1;
	//printf("push %lf - result : %lf\n", data, s->data[s->ptr-1]);
}

double pop() {
	stack.ptr -= 1;
	//printf("pop %lf\n", stack.data[stack.ptr]);
	return stack.data[stack.ptr];
}

double top() {
	return stack.data[stack.ptr];
}

void order(int addr, int *oper, int *num, int *left, int *right) {
	if (addr == 0) {	// 순회 종료
		return;
	}

	order(left[addr], oper, num, left, right);

	order(right[addr], oper, num, left, right);

	if (num[addr] == 0) {	// 연산 노드임
		//printf("%c ", oper[addr]);
		double a = pop();
		double b = pop();
		double result;

		//printf("a : %lf | b : %lf\n", a, b);

		switch (oper[addr]) {
		case '+':
			//push(&s, -1);
			result = b + a;
			break;
		case '-':
			//push(&s, -2);
			result = b - a;
			break;
		case '*':
			//push(&s, -3);
			result = b * a;
			break;
		case '/':
			//push(&s, -4);
			result = b / a;
			break;
		}
		// 연산 종료 후 다시 푸시
		push(result);
	}
	else {	// 숫자 노드임
		//printf("%d ", num[addr]);
		push(num[addr]);
	}
}

int main() {
	int tc;

	for (tc = 1; tc <= 10; tc++) {
		int n, now, i;
		int oper[1010] = { 0, }, num[1010] = { 0, }, left[1010] = { 0, }, right[1010] = { 0, };
		init();

		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			char query[7] = { 0, };
			scanf("%d", &now);
			scanf("%s", &query);

			if(query[0] == '+' || query[0] == '-' || query[0] == '*' || query[0] == '/') {
				oper[now] = query[0];
				scanf("%d %d", &left[now], &right[now]);
			}
			else {
				num[now] = atoi(query);
			}
			//printf("%d %s %d %d %d\n", now, query, left[now], right[now], num[now]);
		}

		order(1, &oper, &num, &left, &right);

		printf("#%d %d\n", tc, (int)pop());
	}

	return 0;
}