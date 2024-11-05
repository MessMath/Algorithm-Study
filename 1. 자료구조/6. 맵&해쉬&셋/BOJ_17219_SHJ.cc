#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

unordered_map<string, string> um;
int n, m;

void solve()
{
	cin >> n >> m;
	string s1, s2;
	for (int i = 0; i < n; ++i)
	{
		cin >> s1 >> s2;
		um[s1] = s2;
	}

	for (int i = 0; i < m; ++i)
	{
		cin >> s1;
		cout << um[s1] << '\n';
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