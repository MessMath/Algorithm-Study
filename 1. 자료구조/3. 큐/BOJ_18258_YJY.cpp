#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string input;
    string order;
    int number;
    queue<int> q;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> order;

        if(order == "push") {
            cin >> number;
            q.push(number);
        } else if(order == "pop") {
            if(q.empty()) cout << "-1\n";
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        } else if(order == "size") {
            cout << q.size() << '\n';
        } else if(order == "empty") {
            if(q.empty())  cout << "1\n";
            else cout << "0\n";
        } else if(order == "front") {
            if(q.empty()) cout << "-1\n";
            else cout << q.front() << '\n';
        } else if(order == "back") {
            if(q.empty()) cout << "-1\n";
            else cout << q.back() << '\n';
        }
    }

    return 0;
}