#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int n;
stack<pair<int, int>> s;

void solve()
{
	cin >> n;

	int temp;
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;

		while (s.empty() == false)
		{
			if (temp < s.top().second)
			{
				cout << s.top().first << " ";
				break;
			}

			s.pop();
		}

		if (s.empty())
			cout << 0 << " ";

		s.push({ i + 1, temp });
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