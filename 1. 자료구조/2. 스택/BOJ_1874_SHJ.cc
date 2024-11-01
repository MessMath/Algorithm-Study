#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int n;
stack<int> s;
queue<int> q;
vector<char> ans;

void solve()
{
	cin >> n;
	int temp;
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		q.push(temp);
	}

	int idx = 1;
	while (q.empty() == false)
	{
		if (!s.empty() && !q.empty() && s.top() == q.front())
		{
			s.pop();
			q.pop();
			ans.push_back('-');
		}
		else if (idx <= q.front())
		{
			while (idx <= q.front())
			{
				s.push(idx);
				idx++;
				ans.push_back('+');
			}
		}
		else
		{
			cout << "NO";
			return;
		}
	}

	for (int i = 0; i < ans.size(); ++i)
	{
		cout << ans[i] << '\n';
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