#include <stdio.h>
#include <malloc.h>

typedef struct {
	char* arr;
	int ptr;
} stack;

void push(stack* stack, char c) {
	stack->arr[stack->ptr++] = c;
}

char pop(stack* stack) {
	if (stack->ptr == 0) {
		return 0;
	}
	else {
		return stack->arr[--stack->ptr];
	}
}

int main() {
	int ti;

	for (ti = 1; ti <= 10; ti++) {
		int length, result = 1, i;
		char c;
		stack s;

		scanf("%d\n", &length);
		s.arr = (char*)malloc(sizeof(char) * length + 1);
		s.ptr = 0;
		for (i = 0; i < length; i++) {
			scanf("%c", &c);

			if (c == '(' || c == '[' || c == '{' || c == '<') {
				push(&s, c);
			}
			else {
				char last = pop(&s);

				if (
					!(
						(last == '(' && c == ')') ||
						(last == '[' && c == ']') ||
						(last == '{' && c == '}') ||
						(last == '<' && c == '>')
					) ||
					last == 0
				) {
					result = 0;
				}
			}
		}
		free(s.arr);

		printf("#%d %d\n", ti, result);
	}

	return 0;
}