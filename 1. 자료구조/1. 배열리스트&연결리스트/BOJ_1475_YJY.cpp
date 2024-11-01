#include <iostream>

using namespace std;

int main()
{
    int cnt[10];    
    int n;

    fill_n(cnt, 10, 0);

    cin >> n;

    while(n >= 1) {
        if(n % 10 == 6) {
            cnt[9]++;
        }
        else{
            cnt[n % 10]++;
        }
        n /= 10;
    }

    int max = cnt[9]/2 + cnt[9]%2;
    for(int i = 0; i < 9; i++) {
        if(max < cnt[i]) {
            max = cnt[i];
        }
    }

    cout << max;

    return 0;
}