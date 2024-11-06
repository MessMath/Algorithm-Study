#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;


int dy[8] = { 0, 0, -1, 1, -1, 1, -1, 1 };
int dx[8] = { -1, 1, 0, 0, -1, -1, 1, 1 };

int N, M, K;
vector<string> board;
unordered_map<string, int> m;
string s = "";

void dfs(int y, int x)
{
	if (s.length() >= 5)
	{
		return;
	}
	else
	{
		for (int i = 0; i < 8; ++i)
		{
			int ny = (y + dy[i] + N) % N;
			int nx = (x + dx[i] + M) % M;
			s += board[ny][nx];
			m[s]++;
			dfs(ny, nx);
			s.pop_back();
		}
	}
}

void solve()
{
	cin >> N >> M >> K;
	board.resize(N);

	for (int i = 0; i < N; i++)
	{
		cin >> board[i];
	}

	vector<string> v(K);
	for (int i = 0; i < K; i++)
	{
		cin >> v[i];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			s.push_back(board[i][j]);
			m[s]++;
			dfs(i, j);
			s.clear();
		}
	}

	for (int i = 0; i < v.size(); ++i)
	{
		cout << m[v[i]] << '\n';
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