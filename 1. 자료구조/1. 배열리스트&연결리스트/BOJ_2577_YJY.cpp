#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, tmp;
    int result[10] = {0};

    cin >> a >> b >> c;

    tmp = a * b * c;
    while (tmp > 0) {
        result[tmp % 10]++;
        tmp /= 10;
    }

    for(int cnt: result) {
        cout << cnt << '\n';
    }
    
    return 0;
}