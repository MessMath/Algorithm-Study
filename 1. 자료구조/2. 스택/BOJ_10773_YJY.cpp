#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, num;
    int sum = 0;
    stack<int> called_num;
    called_num.push(0);

    cin >> k;

    for(int i = 0; i < k; i++) {
        cin >> num;
        if(num == 0) {
            called_num.pop();
        }
        else {
            called_num.push(num);
        }
    }

    while(!called_num.empty())
    {
        sum += called_num.top();
        called_num.pop();
    } 

    cout << sum;

    return 0;
}