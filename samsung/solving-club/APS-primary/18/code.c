#include <stdio.h>

typedef struct {
	int arr[9];	// 한칸 더 넉넉하게
	int front;
	int back;
} Queue;

void init(Queue* q) {
	q->front = 0;
	q->back = 0;
}

void enqueue(Queue* q, int n) {
	q->arr[q->front] = n;
	//printf("euqueue %d at %d\n", q->arr[q->front], q->front);
	q->front = (q->front + 1) % 9;
}

int dequeue(Queue* q) {
	int t = q->arr[q->back];
	//printf("dequeue %d at %d\n", q->arr[q->back], q->back);
	q->back = (q->back + 1) % 9;
	return t;
}

int main() {
	int tc;

	for (tc = 1; tc <= 10; tc++) {
		int t, n, cycle=1, i;
		Queue queue;
		init(&queue);

		scanf("%d", &t);
		for (i = 0; i < 8; i++) {
			scanf("%d", &n);
			enqueue(&queue, n);
		}
		while (1) {
			int temp = dequeue(&queue);
			//printf("\ttemp %d\n", temp);
			
			if (temp - cycle <= 0) {
				enqueue(&queue, 0);
				break;
			}
			else {
				enqueue(&queue, temp - cycle);
				if (cycle == 5) {
					cycle = 1;
				}
				else {
					cycle += 1;
				}
			}
		}
		printf("#%d ", t);
		for (i = 0; i < 8; i++) {
			printf("%d ", dequeue(&queue));
		}
		printf("\n");
	}

	return 0;
}