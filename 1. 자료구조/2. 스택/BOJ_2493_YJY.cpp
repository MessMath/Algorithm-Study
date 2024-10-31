#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> towers(n);
    vector<int> counts(n);
    stack<pair<int,int>> checker;

    for(int i = 0; i < n; i++) {
        cin >> towers[i];
    
        while(!checker.empty() && checker.top().first < towers[i]) {
            checker.pop();
        }

        if(!checker.empty()) {
            counts[i] = checker.top().second + 1;
        } else {
            counts[i] = 0;
        }
        checker.push({towers[i], i});
    }

    for(int count: counts)
        cout << count << ' ';

    return 0;
}