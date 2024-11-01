#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int n = -1, m = -1, t = 0;
vector<vector<int>> board;
vector<int> visited;
vector<int> cycleNodes;
// dfs로 사이클 찾기
// union find로 사이클 찾기

void dfs(int u, int p)
{
	if (visited[u])
		return;

	visited[u] = 1;

	for (int i = 0; i < board[u].size(); ++i)
	{
		int next = board[u][i];
		if (visited[next] == false)
			dfs(next, u);
		else if (p != next)
			cycleNodes.push_back(u);
	}
}

void solve()
{
	while (true)
	{
		t++;
		cin >> n >> m;
		if (n == 0 && m == 0)
			break;

		board = vector<vector<int>>(n + 1);
		for (int i = 0; i < m; ++i)
		{
			int u, v;
			cin >> u >> v;
			if (v < u)
				swap(u, v);
			board[u].push_back(v);
			board[v].push_back(u);
		}

		visited = vector<int>(n + 1, 0);
		cycleNodes.clear();
		// cycle check
		for (int i = 1; i <= n; ++i)
		{
			dfs(i, i);
		}

		visited = vector<int>(n + 1, 0);
		for (int i = 0; i < cycleNodes.size(); ++i)
		{
			int here = cycleNodes[i];
			if (visited[here])
				continue;
			queue<int> q;
			q.push(here);
			visited[here] = 1;
			while (q.empty() == false)
			{
				int here = q.front();
				q.pop();

				for (int i = 0; i < board[here].size(); ++i)
				{
					int next = board[here][i];
					if (visited[next])
						continue;
					q.push(next);
					visited[next] = 1;
				}
			}
		}

		// count tree
		int cnt = 0;
		for (int i = 1; i <= n; ++i)
		{
			if (visited[i])
				continue;

			cnt++;
			queue<int> q;
			q.push(i);
			visited[i] = 1;
			while (q.empty() == false)
			{
				int here = q.front();
				q.pop();

				for (int i = 0; i < board[here].size(); ++i)
				{
					int next = board[here][i];
					if (visited[next])
					{
						continue;
					}

					visited[next] = 1;
					q.push(next);
				}
			}

		}

		// cout 
		cout << "Case " << t << ": ";

		if (cnt == 1)
			cout << "There is one tree." << '\n';
		else if (cnt == 0)
			cout << "No trees." << '\n';
		else
			cout << "A forest of " << cnt << " trees." << '\n';
	};
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