#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

void solve() {
	priority_queue<int, vector<int>, greater<int>> pq;
	int n;
	cin >> n;
	int temp;
	for (int i = 0; i < n * n; ++i) {
		cin >> temp;
		pq.push(temp);
		if (pq.size() > n)
			pq.pop();
	}

	cout << pq.top();
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