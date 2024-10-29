#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int n, x, ret;
vector<int> v;
map<int, int> m;
void solve()
{
	cin >> n;
	int temp;
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		m[temp]++;
	}
	cin >> x;

	for (auto it = m.begin(); it != m.end(); ++it)
	{
		if (m[it->first] == 1 && m[x - it->first] == 1)
		{
			ret++;
		}

	}

	cout << ret / 2;
}

int main()
{
	FILE* stream;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//freopen_s(&stream, "input.txt", "rt", stdin);

	solve();

	return 0;
}