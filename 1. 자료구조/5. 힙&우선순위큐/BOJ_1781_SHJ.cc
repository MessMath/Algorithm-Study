#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

struct node
{
	int num;
	int dead;

	bool operator< (const node& other) {
		return dead < other.dead;
	}
};

int n, ret;

void solve()
{
	cin >> n;
	vector<node> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i].dead >> v[i].num;
	}
	sort(v.begin(), v.end());

	priority_queue<int, vector<int>, greater<int>> pq;

	for (int i = 0; i < v.size(); ++i)
	{
		pq.push(v[i].num);
		ret += v[i].num;

		if (pq.size() > v[i].dead)
		{
			ret -= pq.top();
			pq.pop();
		}
	}

	cout << ret;
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