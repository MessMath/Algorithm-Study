#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<pair<int, int>>> board;
vector<int> dist;
vector<int> visited;

void solve()
{
	cin >> n >> m;
	board = vector<vector<pair<int, int>>>(n + 1);
	dist = vector<int>(n + 1);
	visited = vector<int>(n + 1);

	int u, v, c;
	for (int i = 0; i < n - 1; ++i)
	{
		cin >> u >> v >> c;
		board[u].push_back({ v, c });
		board[v].push_back({ u, c });
	}

	for (int i = 0; i < m; ++i)
	{
		cin >> u >> v;
		dist = vector<int>(n + 1, 0);
		visited = vector<int>(n + 1, 0);
		queue<int> q;
		q.push(u);
		dist[u] = 0;
		visited[u] = 1;
		
		while (q.empty() == false)
		{
			int here = q.front();
			q.pop();

			for (int i = 0; i < board[here].size(); ++i)
			{
				int next = board[here][i].first;

				if (visited[next])
					continue;
				dist[next] = dist[here] + board[here][i].second;
				visited[next] = 1;
				q.push(next);
			}
		}

		cout << dist[v] << '\n';
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