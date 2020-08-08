#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int arr[8];
bool visit[9] = { false, };
void solve(int n, int cnt)
{
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
	else
	{
		for (int i = n; i <= N; i++)
		{
			arr[cnt] = i;
			solve(i, cnt + 1);
		}
	}
}

int main()
{
	cin >> N >> M;
	solve(1, 0);

	return 0;
}