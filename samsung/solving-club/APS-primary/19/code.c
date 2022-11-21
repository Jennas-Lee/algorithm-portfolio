#include <stdio.h>

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
	Pair arr[260];
	int front;
	int back;
	int size;
} Queue;

void init(Queue* q) {
	q->front = 0;
	q->back = 0;
	q->size = 0;
}

void enqueue(Queue* q, Pair pair) {
	q->arr[q->front] = pair;
	q->front = (q->front + 1) % 260;
	q->size += 1;
	//printf("enqueue %d %d\n", pair.x, pair.y);
}

Pair dequeue(Queue* q) {
	Pair pair = q->arr[q->back];

	q->back = (q->back + 1) % 260;
	q->size -= 1;

	return pair;
}

int empty(Queue* q) {
	//printf("\tqueue size %d\n", q->size);
	return q->size <= 0;
}

int main() {
	int tc;

	for (tc = 1; tc <= 10; tc++) {
		int map[18][18] = { 0, };
		int start_x, start_y, end_x, end_y;
		int result = 0, t, i, j;
		Queue queue;
		init(&queue);

		scanf("%d\n", &t);

		for (i = 0; i < 16; i++) {
			char tmp_c[17];
			scanf("%s", &tmp_c);
			for (j = 0; j < 16; j++) {
				map[i][j] = tmp_c[j] - 48;
				if (map[i][j] == 2) {	// 시작지점
					start_x = i, start_y = j;
				}
				else if (map[i][j] == 3) {
					end_x = i, end_y = j;
				}
			}
		}
		//printf("start at %d %d | end at %d %d\n", start_x, start_y, end_x, end_y);

		enqueue(&queue, make_pair(start_x, start_y));	// BFS 시작지점 삽입
		map[start_x][start_y] = 1;	// 시작지점 방문 체크
		while (!empty(&queue)) {
			Pair now = dequeue(&queue);
			//printf("now : %d %d\n", now.x, now.y);

			if (now.x == end_x && now.y == end_y) {	// 현재 위치가 도착점일 때
				result = 1;
				break;
			}

			if (now.x > 0 && map[now.x - 1][now.y] != 1) {
				enqueue(&queue, make_pair(now.x - 1, now.y));
				map[now.x - 1][now.y] = 1;
			}
			if (now.x < 15 && map[now.x + 1][now.y] != 1) {
				enqueue(&queue, make_pair(now.x + 1, now.y));
				map[now.x + 1][now.y] = 1;
			}
			if (now.y > 0 && map[now.x][now.y - 1] != 1) {
				enqueue(&queue, make_pair(now.x, now.y - 1));
				map[now.x][now.y - 1] = 1;
			}
			if (now.y < 15 && map[now.x][now.y + 1] != 1) {
				enqueue(&queue, make_pair(now.x, now.y + 1));
				map[now.x][now.y + 1] = 1;
			}
		}

		printf("#%d %d\n", tc, result);
	}

	return 0;
}