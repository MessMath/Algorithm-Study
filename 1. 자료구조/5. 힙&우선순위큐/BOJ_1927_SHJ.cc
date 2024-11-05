#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	priority_queue<int, vector<int>, greater<int>> pq;
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		int temp;
		cin >> temp;
		if (temp == 0) {
			if (pq.empty() == false) {
				cout << pq.top() << '\n';
				pq.pop();
			}
			else cout << 0 << '\n';
		}
		else {
			pq.push(temp);
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