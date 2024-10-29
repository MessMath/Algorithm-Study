#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int n;
queue<int> q;

void solve()
{
	cin >> n;

	for (int i = 1; i <= n; ++i)
		q.push(i);

	while (q.size() != 1)
	{
		q.pop();
		int temp = q.front();
		q.pop();
		q.push(temp);
	}
	cout << q.front();
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