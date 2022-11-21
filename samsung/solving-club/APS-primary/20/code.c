﻿#include <stdio.h>
#define QUEUE_MAX_SIZE 10000

typedef struct {
	int x;
	int y;
} Pair;

Pair make_pair(int x, int y) {
	Pair pair;

	pair.x = x;
	pair.y = y;

	return pair;
}

typedef struct {
	Pair arr[QUEUE_MAX_SIZE];
	int front;
	int back;
	int size;
} Queue;

void init(Queue* q) {
	q->front = 0;
	q->back = 0;
	q->size = 0;
}

void enqueue(Queue* q, Pair p) {
	q->arr[q->front] = p;
	q->front = (q->front + 1) % QUEUE_MAX_SIZE;
	q->size += 1;
}

Pair dequeue(Queue* q) {
	Pair tmp_p = q->arr[q->back];
	q->back = (q->back + 1) % QUEUE_MAX_SIZE;
	q->size -= 1;

	return tmp_p;
}

int empty(Queue* q) {
	return q->size <= 0;
}

int main() {
	int tc;

	for (tc = 1; tc <= 10; tc++) {
		int t, i, j;
		int map[102][102] = { 0, };
		int start_x, start_y, end_x, end_y, result = 0;
		char tmp_c[102];
		Queue queue;
		
		init(&queue);

		scanf("%d\n", &t);
		for (i = 0; i < 100; i++) {
			scanf("%s", &tmp_c);
			for (j = 0; j < 100; j++) {
				map[i][j] = tmp_c[j] - 48;
				if (map[i][j] == 2) {
					start_x = i;
					start_y = j;
				}
				else if (map[i][j] == 3) {
					end_x = i;
					end_y = j;
				}
			}
		}

		enqueue(&queue, make_pair(start_x, start_y));	// 시작지점 삽입
		map[start_x][start_y] = 1;	// 시작지점 방문 체크

		while (!empty(&queue)) {
			Pair now = dequeue(&queue);

			if (now.x == end_x && now.y == end_y) {
				result = 1;
				break;
			}

			if (now.x > 0 && map[now.x - 1][now.y] != 1) {
				enqueue(&queue, make_pair(now.x - 1, now.y));
				map[now.x - 1][now.y] = 1;
			}
			if (now.x < 99 && map[now.x + 1][now.y] != 1) {
				enqueue(&queue, make_pair(now.x + 1, now.y));
				map[now.x + 1][now.y] = 1;
			}
			if (now.y > 0 && map[now.x][now.y - 1] != 1) {
				enqueue(&queue, make_pair(now.x, now.y - 1));
				map[now.x][now.y - 1] = 1;
			}
			if (now.y < 99 && map[now.x][now.y + 1] != 1) {
				enqueue(&queue, make_pair(now.x, now.y + 1));
				map[now.x][now.y + 1] = 1;
			}
		}

		printf("#%d %d\n", tc, result);
	}

	return 0;
}