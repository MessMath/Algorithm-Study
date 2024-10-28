#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int a, b, c;
int ch[10];

void solve()
{
	cin >> a >> b >> c;
	long long ret = a * b * c;

	while (ret > 0)
	{
		int a = ret % 10;
		ch[a]++;
		ret /= 10;
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << ch[i] << '\n';
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