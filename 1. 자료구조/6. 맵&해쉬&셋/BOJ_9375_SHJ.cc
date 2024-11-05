#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int t, n;

void solve()
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		string s1, s2;
		unordered_map<string, int> um;
		vector<string> v;
		for (int i = 0; i < n; ++i)
		{
			cin >> s1 >> s2;
			if (um[s2] == 0)
				v.push_back(s2);
			um[s2]++;
		}

		int ret = 1;
		for (int i = 0; i < v.size(); ++i)
		{
			ret *= (um[v[i]] + 1);
		}
		cout << ret - 1 << '\n';
	}
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