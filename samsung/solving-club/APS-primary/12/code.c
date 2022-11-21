#include <stdio.h>
#define QUEUE_SIZE 105

typedef struct {
	int queue[105];
	int front;
	int back;
	int size;
} Queue;

void init(Queue* queue) {
	queue->front = 0;
	queue->back = 0;
	queue->size = 0;
}

void enqueue(Queue* queue, int num) {
	queue->queue[queue->front] = num;
	queue->front += 1;
	queue->front %= QUEUE_SIZE;
	queue->size += 1;
}

int dequeue(Queue* queue) {
	int result = queue->queue[queue->back];
	queue->back += 1;
	queue->back %= QUEUE_SIZE;
	queue->size -= 1;

	return result;
}

int size(Queue* queue) {
	return queue->size;
}

int empty(Queue* queue) {
	if (queue->size == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	int ti;

	for (ti = 1; ti <= 10; ti++) {
		int t, c, from, to, result = 0, i;
		int arr[105][105] = { 0, };
		int visit[105] = { 0, };
		Queue queue;
		init(&queue);

		scanf("%d %d", &t, &c);
		for (i = 0; i < c; i++) {
			scanf("%d %d", &from, &to);
			// 계산을 편하게 하기 위해 1씩 더함
			// 1 : 출발, 100 : 도착
			arr[from + 1][to + 1] = 1;
		}

		enqueue(&queue, 1);

		while (!empty(&queue)) {
			int now = dequeue(&queue);

			// finish, we found end point
			if (now == 100) {
				result = 1;
				break;
			}

			// already visited
			if (visit[now] == 1) {
				continue;
			}
			else {
				visit[now] = 1;
			}

			for (i = 1; i <= 100; i++) {
				if (arr[now][i] == 1) {
					enqueue(&queue, i);
				}
			}
		}

		printf("#%d %d\n", t, result);
	}

	return 0;
}