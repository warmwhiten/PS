#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int arr[8];
bool visit[9] = { false, };
void solve(int cnt)
{
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
	else
	{
		for (int i = 1; i <= N; i++)
		{
			if (!visit[i])
			{
				arr[cnt] = i;
				visit[i] = true;
				solve(cnt + 1);
				visit[i] = false;
			}
		}
	}
}

int main()
{
	cin >> N >> M;
	solve(0);

	return 0;
}