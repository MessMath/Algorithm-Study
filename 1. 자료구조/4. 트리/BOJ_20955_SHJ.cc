#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

vector<int> unf;
int n, m;

int Find(int v)
{
	if (v == unf[v])
		return v;
	return unf[v] = Find(unf[v]);
}

void Union(int u, int v)
{
	u = Find(u);
	v = Find(v);
	if (u != v)
		unf[u] = v;
}

void solve()
{
	cin >> n >> m;
	unf = vector<int>(n + 1);
	for (int i = 1; i <= n; ++i)
	{
		unf[i] = i;
	}
	int cnt1 = 0, cnt2 = 0; // cycle count, tree count

	for (int i = 0; i < m; ++i)
	{
		int u, v;
		cin >> u >> v;

		if (Find(u) == Find(v))
		{
			cnt1++;
		}
		else
		{
			Union(u, v);
		}
	}

	for (int i = 1; i <= n; ++i)
	{
		if (Find(i) == i)
			cnt2++;
	}

	cout << cnt1 + cnt2 - 1;
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