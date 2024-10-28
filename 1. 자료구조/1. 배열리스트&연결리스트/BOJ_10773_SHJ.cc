#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int k, ret;

void solve()
{
	cin >> k;
	stack<int> s;
	int temp;
	for (int i = 0; i < k; ++i)
	{
		cin >> temp;
		if (temp == 0)
			s.pop();
		else
			s.push(temp);
	}

	while (s.empty() == false)
	{
		ret += s.top();
		s.pop();
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