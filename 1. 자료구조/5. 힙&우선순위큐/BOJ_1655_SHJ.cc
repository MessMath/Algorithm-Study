#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;

	priority_queue<int> mxpq;
	priority_queue<int, vector<int>, greater<int>> mnpq;

	int num;
	for (int i = 0; i < n; ++i)
	{
		cin >> num;

		if (mxpq.size() <= mnpq.size())
			mxpq.push(num);
		else
			mnpq.push(num);

		if (!mxpq.empty() && !mnpq.empty() && mxpq.top() > mnpq.top())
		{
			int mx = mxpq.top();
			int mn = mnpq.top();
			mxpq.pop();
			mnpq.pop();
			mxpq.push(mn);
			mnpq.push(mx);
		}

		cout << mxpq.top() <<'\n';
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