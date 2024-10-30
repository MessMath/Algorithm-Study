#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<int> checker;
    string result = "";
    int idx = 0;

    for(int i = 1; i <= n; i++)
    {
        checker.push(i);
        result += "+\n";
        
        while(!checker.empty() && checker.top() == arr[idx]) {
            checker.pop();
            result += "-\n";
            idx++;    
        }
    }

    if(checker.empty()) {
        cout << result;
    }
    else {
        cout << "NO";
    }

    return 0;
}