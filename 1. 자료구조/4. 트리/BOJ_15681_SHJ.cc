#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int N, R, Q;
vector<vector<int>> board;
vector<int> visited;
vector<int> v;

int dfs(int x)
{
	visited[x] = 1;
	v[x] = 1;

	for (int i = 0; i < board[x].size(); ++i)
	{
		int next = board[x][i];
		if (visited[next])
			continue;
		v[x] += dfs(next);
	}

	return v[x];
}

void solve()
{
	cin >> N >> R >> Q;
	board = vector<vector<int>>(N + 1);
	visited = vector<int>(N + 1);
	v = vector<int>(N + 1);
	for (int i = 0; i < N - 1; ++i)
	{
		int u, v;
		cin >> u >> v;
		board[u].push_back(v);
		board[v].push_back(u);
	}

	dfs(R);

	for (int i = 0; i < Q; ++i)
	{
		int u;
		cin >> u;
		cout << v[u] << '\n';
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