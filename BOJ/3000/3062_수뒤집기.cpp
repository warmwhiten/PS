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

	int T;
	cin >> T;
	while (T--)
	{
		int num;
		cin >> num;
		string str = to_string(num);
		reverse(str.begin(), str.end());
		num += stoi(str);
		str = to_string(num);
		string str2 = str;
		reverse(ALL(str2));
		if (str.compare(str2) == 0) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}