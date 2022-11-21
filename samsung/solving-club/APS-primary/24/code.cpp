#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int N;
int Firstchild[101], Secondchild[101];
char Alpha[101];
char Answer[101];

void inorder(int node) {
	if (node == 0) {	// 하위 노드가 아예 없음
		return;
	}

	inorder(Firstchild[node]);

	printf("%c", Alpha[node]);

	inorder(Secondchild[node]);
}

int main(int argc, char** argv)
{
	int test_case;

	/*
	   10개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for (test_case = 1; test_case <= 10; ++test_case)
	{
		int i;
		memset(Firstchild, 0, sizeof(int) * 101);
		memset(Secondchild, 0, sizeof(int) * 101);
		memset(Alpha, 0, sizeof(char) * 101);
		memset(Answer, 0, sizeof(char) * 101);

		/*
			 각 테스트 케이스를 표준 입력에서 읽어옵니다.
			 정점의 개수는 N에 저장됩니다.

			 각 정점 번호 i에 대해서 해당하는 정보가 다음 배열 i번째 index에 저장됩니다.
			 해당 정점이 자식을 갖는 경우, Alpha[i]에 해당 연산자가 저장되며 Firstchild[i], Secondchild[i]에 각각 자식 정점의 번호가 저장됩니다.
			 해당 정점이 단말일 경우 해당 위치의 Firstchild,Secondchild의 값은 보장되지 않습니다.
		 */
		cin >> N;
		for (i = 0; i < N; i++)
		{
			int addr;
			char buf[100];

			cin >> addr;
			cin >> buf;

			Alpha[addr] = buf[0];

			if (addr * 2 <= N)
			{
				cin >> Firstchild[addr];
				if (addr * 2 + 1 <= N)
					scanf("%d ", &Secondchild[addr]);
			}
		}



		cout << "#" << test_case << " ";

		inorder(1);
		printf("\n");

		/////////////////////////////////////////////////////////////////////////////////////////////
		/*
			 이 부분에 여러분의 알고리즘 구현이 들어갑니다.
		 */
		 /////////////////////////////////////////////////////////////////////////////////////////////

	}

	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
