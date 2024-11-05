#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int k, l;
unordered_map<string, int> m;
vector<pair<string, int>> v;

bool cmp(pair<string, int>& a, pair<string, int> b)
{
	return a.second < b.second;
}

void solve()
{
	cin >> k >> l;
	string num;
	int idx = 0;
	for (int i = 0; i < l; ++i)
	{
		cin >> num;
		m[num] = idx++;
	}
	v = vector<pair<string, int>>(m.begin(), m.end());
	sort(v.begin(), v.end(), cmp);

	int cnt = min(k, (int)v.size());
	for (int i = 0; i < cnt; ++i)
	{
		cout << v[i].first << '\n';
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