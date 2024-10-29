#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int n;
queue<int> q;
map<string, int> m;

void solve()
{
	cin >> n;

	m["push"] = 1;
	m["pop"] = 2;
	m["size"] = 3;
	m["empty"] = 4;
	m["front"] = 5;
	m["back"] = 6;

	string str;
	for (int i = 0; i < n; ++i)
	{
		cin >> str;
		int idx = m[str];
		int temp;
		switch (idx)
		{
		case 1:
			cin >> temp;
			q.push(temp);
			break;
		case 2:
			if (q.empty()) cout << -1 << '\n';
			else { cout << q.front() << '\n'; q.pop(); }
			break;
		case 3:
			cout << q.size() << '\n';
			break;
		case 4:
			if (q.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
			break;
		case 5:
			if (q.empty()) cout << -1 << '\n';
			else cout << q.front() << '\n';
			break;
		case 6:
			if (q.empty()) cout << -1 << '\n';
			else cout << q.back() << '\n';
			break;
		}
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