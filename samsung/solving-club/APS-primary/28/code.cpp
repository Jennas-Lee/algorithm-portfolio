#include <cstdio>
#include <queue>

using namespace std;

int main() {
	int tc;

	for (tc = 1; tc <= 10; tc++) {
		// 각종 변수 선언
		int len, start, from, to, max = 0, now, size, wave, i, j;
		int map[305][305] = { 0, }, visit[305] = { 0, };
		queue<int> q;

		// 데이터 입력받기
		scanf("%d %d", &len, &start);
		for (i = 0; i < len; i += 2) {
			scanf("%d %d", &from, &to);
			map[from][to] = 1;
		}

		// BFS에서 시작점 무조건 추가 
		q.push(start);
		// 출발지는 미리 방문표시
		for (i = 1; i <= len; i++) {
			//map[i][start] = 0;	// 단방향 그래프이므로
			visit[start] = 1;
		}

		// BFS 시작
		while (!q.empty()) {
			// 현재 큐의 사이즈는 한 웨이브이므로 반드시 지금 돌아야 함
			size = q.size();
			wave = 0;	// 웨이브 여부 초기화
			//printf("\tsize : %d\n", size);

			//max = 0;	// 한 웨이브에서의 최대값 초기화

			for (i = 0; i < size; i++) {
				now = q.front();	// 현재 위치 설정
				q.pop();	// 큐에서 현재 위치 뺌
				//printf("now %d\n", now);

				// 인접행렬에서 갈 수 있는 데이터 모두 검색
				for (j = 1; j <= len; j++) {
					if (map[now][j] == 1 && visit[j] == 0) {	// 갈 수 있는 연락망 찾음
						if (wave == 0) {	// 갈 수 있는 곳이 있으면 새로운 웨이브 시작
							wave = 1;
							max = 0;
							//printf("wave start\n");
						}
							//printf("found %d -> %d\n", now, j);
						//max = j;
						if (wave == 1 && j > max) {	// 새로운 웨이브이면 최대값 업데이트 가능함
							max = j;
						}
						//map[now][j] = 0, map[j][now] = 0;	// 방문표시
						visit[j] = 1;
						q.push(j);	// 갈 수 있는 연락망 큐에 삽입
						//printf("%d\n", j);
					}
				}
				//printf("\n");
			}
		}

		printf("#%d %d\n", tc, max);
	}

	return 0;
}