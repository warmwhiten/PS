#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FUP(i, a, b) for(int i = a; i <= b; i++)
#define FDOWN(i, a, b) for(int i = a; i >= b; i--)
#define MS(a, b) memset(a, b, sizeof(a))
#define ALL(v) v.begin(), v.end()
int dy[4] = { -1, 1, 0, 0 };
int dx[4] = { 0, 0, 1, -1 };

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string N;
	int M;
	cin >> N >> M;

	int cnt = 0;
	bool ok = false;
	while (true)
	{
		for(char ch : N)
		{
			cout << ch;
			cnt++;
			if (cnt == M || cnt == N.length() * stoi(N))
			{
				ok = true;
				break;
			}
		}
		if (ok) break;
	}

	return 0;
}