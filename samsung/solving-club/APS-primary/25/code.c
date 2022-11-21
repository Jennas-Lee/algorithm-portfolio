#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int N;
char Oper[201];
int Firstchild[201];
int Secondchild[201];
int Num[201];
int validator = 0;
int result = 1;

void order(int addr) {
	if (addr == 0) {
		return;
	}

	order(Firstchild[addr]);

	//printf("%d ", addr);
	if (Oper[addr] == 0) {	// number
		//printf("%d ", Num[addr]);
		if (validator == 0) {	// correct
			validator = 1;
		}
		else {
			//printf("EMERGENCY ");
			result = 0;
		}
	}
	else {	// operator
		//printf("%c ", Oper[addr]);
		if (validator == 1) {	// correct
			validator = 0;
		}
		else {
			//printf("EMERGENCY ");
			result = 0;
		}
	}

	order(Secondchild[addr]);
}

int main(void)
{
	int test_case;

	/*
		 10 개의 테스트 케이스를 처리하기 위한 부분입니다.
	*/
	for (test_case = 1; test_case <= 10; ++test_case)
	{
		int i, j;
		int addr;
		char str[200];
		memset(Firstchild, 0, sizeof(int) * 201);
		memset(Secondchild, 0, sizeof(int) * 201);
		memset(Num, 0, sizeof(int) * 201);
		memset(Oper, 0, sizeof(char) * 201);

		/*
			 각 테스트 케이스를 표준 입력에서 읽어옵니다.
			 정점의 개수는 N에 저장됩니다.

			 각 정점 번호 i에 대해서 해당하는 정보가 다음 배열 i번째 index에 저장됩니다.
			 해당 정점이 자식을 갖는 경우, 연산자면 Oper[i]에 해당 연산자가 저장되며,
			 숫자일 경우, Num[i]에 해당 연산자가 저장된다.
			 Firstchild[i], Secondchild[i]에 각각 자식 정점의 번호가 저장됩니다.
			 해당 정점이 단말일 경우 해당 위치의 Firstchild,Secondchild의 값은 보장되지 않습니다.
		 */
		scanf("%d", &N);
		for (i = 0; i < N; i++)
		{
			scanf("%d", &addr);
			scanf("%s", str);

			if (strcmp(str, "+") == 0 || strcmp(str, "-") == 0 || strcmp(str, "/") == 0 || strcmp(str, "*") == 0)
				Oper[addr] = str[0];
			else
				Num[addr] = atoi(str);

			if (addr * 2 <= N)
			{
				scanf("%d ", &Firstchild[addr]);
				if (addr * 2 + 1 <= N)
					scanf("%d ", &Secondchild[addr]);
			}
		}
		
		//int t = 171;
		//printf("%d %d %d %c %d\n", t, Firstchild[t], Secondchild[t], Oper[t], Num[t]);

		validator = 0, result = 1;
		order(1);

		printf("#%d %d\n", test_case, result);
		/////////////////////////////////////////////////////////////////////////////////////////////
		/*
		   이 부분에 여러분의 알고리즘 구현이 들어갑니다.
		 */
		 /////////////////////////////////////////////////////////////////////////////////////////////

		 // 표준출력(화면)으로 답안을 출력합니다.
	}

	return 0;//정상종료시 반드시 0을 리턴해야 합니다.
}
