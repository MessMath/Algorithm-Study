#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int n;
int ch[10];

void solve()
{
	cin >> n;
	while (n > 0)
	{
		ch[n % 10]++;
		n /= 10;
	}
	int temp = (ch[6] + ch[9]);
	temp = (temp & 1) == 0 ? temp / 2 : temp / 2 + 1;

	int mx = 0;
	for (int i = 0; i < 10; ++i)
	{
		if (i == 6 || i == 9)
			continue;
		mx = max(mx, ch[i]);
	}

	cout << max(mx, temp);
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