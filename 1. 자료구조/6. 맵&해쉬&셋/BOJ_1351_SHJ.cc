#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

long long N, P, Q;
vector<long long> v;
unordered_map<long long, long long> um;

long long dfs(long long n)
{
	if (n == 0) return 1;
	if (um.count(n)) return um[n];

	um[n] = dfs(n / P) + dfs(n / Q);
	return um[n];
}

void solve()
{
	cin >> N >> P >> Q;
	um[0] = 1;

	dfs(N);

	cout << um[N];
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