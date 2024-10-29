#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int t;

void solve()
{
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		list<char> li;
		auto it = li.begin();
		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i] == '>')
			{
				if (it != li.end()) it++;
			}
			else if (s[i] == '<')
			{
				if (it != li.begin()) it--;
			}
			else if (s[i] == '-')
			{
				if (it != li.begin())
				{
					auto temp = it;
					temp--;
					it = li.erase(temp);
				}
			}
			else
			{
				li.insert(it, s[i]);
			}
		}

		for (auto i = li.begin(); i != li.end(); ++i)
			cout << *i;
		cout << '\n';
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