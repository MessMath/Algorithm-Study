#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int n, k;

void solve()
{
	cin >> n >> k;
	list<int> li;
	for (int i = 1; i <= n; ++i)
		li.push_back(i);
	auto it = li.begin();
	cout << "<";
	while (li.size() != 1)
	{
		for (int i = 0; i < k - 1; ++i)
		{
			if (it != li.end())
			{
				it++;
				if (it == li.end())
					it = li.begin();
			}
			else
			{
				it = li.begin();
			}
		}

		auto temp = it;
		cout << *temp << ", ";
		it = li.erase(temp);
		if (it == li.end())
			it = li.begin();
	}

	cout << *it << ">";
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