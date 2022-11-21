#include <stdio.h>

typedef struct {
	char s[130];
	int ptr;
} Stack_char;

void init_char(Stack_char* stack) {
	stack->ptr = 0;
}

void push_char(Stack_char* stack, char c) {
	stack->s[stack->ptr] = c;
	stack->ptr += 1;
	//printf("push %c\n", c);
}

char pop_char(Stack_char* stack) {
	stack->ptr -= 1;
	//printf("pop %c\n", stack->s[stack->ptr]);
	return stack->s[stack->ptr];
}

char top_char(Stack_char* stack) {
	if (stack->ptr == 0) {
		//printf("top empty\n");
		return '.';
	}
	else {
		//printf("top %c | ptr : %d\n", stack->s[stack->ptr-1], stack->ptr);
		return stack->s[stack->ptr-1];
	}
}

int empty_char(Stack_char* stack) {
	return stack->ptr <= 0;
}

typedef struct {
	int s[130];
	int ptr;
} Stack_int;

void init_int(Stack_int* stack) {
	stack->ptr = 0;
}

void push_int(Stack_int* stack, int c) {
	stack->s[stack->ptr] = c;
	stack->ptr += 1;
}

int pop_int(Stack_int* stack) {
	stack->ptr -= 1;
	return stack->s[stack->ptr];
}

int empty_int(Stack_int* stack) {
	return stack->ptr <= 0;
}

int main() {
	int tc;

	for (tc = 1; tc <= 10; tc++) {
		int length, result = 0, i, j = 0;
		char input, postfix[150] = { 0, };
		Stack_char stack;
		init_char(&stack);

		scanf("%d\n", &length);
		for (i = 0; i < length; i++) {
			scanf("%c", &input);

			//printf("now %c ", input);

			if (input == '+') {	// 스택 위에 + 또는 *가 있으면 우선순위가 동등하거나 높으므로 pop한 후 자기 자신을 push한다.
				while (!empty_char(&stack)) {
					if (top_char(&stack) == '+' || top_char(&stack) == '*') {
						postfix[j++] = pop_char(&stack);
					}
					else {
						break;
					}
				}
				push_char(&stack, '+');
			}
			else if (input == '*') {	// 스택 위에 *가 있으면 우선순위가 동등하므로 pop한 후 자기 자신을 push한다.
				while (!empty_char(&stack)) {
					if (top_char(&stack) == '*') {
						postfix[j++] = pop_char(&stack);
					}
					else {
						break;
					}
				}
				push_char(&stack, '*');
			}
			else if (input == '(') {	// 열린괄호가나오면 무조건 push한다.
				push_char(&stack, '(');
			}
			else if (input == ')') {	// 닫힌괄호가 나오면 열린괄호가 나올 때까지 모두 pop한다.
				while (!empty_char(&stack)) {
					char t = top_char(&stack);
					if (t == '(') {
						pop_char(&stack);
						//printf("found (, BREAK!\n");
						break;
					}
					else {
						postfix[j++] = pop_char(&stack);;
					}
				}
			}
			else {	// 숫자가 나오면 그대로 출력한다.
				postfix[j++] = input;
				//printf("\tj - %d\n", j - 1);
			}
		}
		while (!empty_char(&stack)) {
			if (top_char(&stack) != '(') {
				postfix[j++] = pop_char(&stack);
			}
		}
		//printf("%s\n", postfix);

		Stack_int stack_int;
		init_int(&stack_int);

		for (i = 0; i < j; i++) {
			//printf("\tnow %c\n", postfix[i]);
			if (postfix[i] == '+') {
				int n1 = pop_int(&stack_int);
				int n2 = pop_int(&stack_int);
				int sum = n1 + n2;
				//printf("+ push %d\n", sum);
				push_int(&stack_int, sum);
				//printf("%d + %d = %d\n", n1, n2, sum);
			}
			else if (postfix[i] == '*') {
				int n1 = pop_int(&stack_int);
				int n2 = pop_int(&stack_int);
				int mul = n1 * n2;
				//printf("* push %d\n", mul);
				push_int(&stack_int, mul);
				//printf("%d * %d = %d\n", n1, n2, mul);
			}
			else {	// 숫자는 그냥 푸시
				//printf("push %d\n", postfix[i]-48);
				push_int(&stack_int, postfix[i] - 48);
			}
		}

		printf("#%d %d\n", tc, pop_int(&stack_int));
	}

	return 0;
}