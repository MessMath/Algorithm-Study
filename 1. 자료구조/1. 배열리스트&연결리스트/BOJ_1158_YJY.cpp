#include <iostream>
#include <list>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);

    int n, k;
    string result = "<";

    cin >> n >> k;

    list<int> circle;

    for(int i = 1; i <= n; i++) {
        circle.push_back(i);
    }

    list<int>::iterator it = circle.begin();
    
    while(!circle.empty()) {
        for(int i = 1; i < k; i++) {
            it++;
            if(it == circle.end()) {
                it = circle.begin();
            }
        }
        result += to_string(*it) + ", ";

        it = circle.erase(it);
        if(it == circle.end()) {
            it = circle.begin();
        }
    }
    result.pop_back();
    result.pop_back();

    cout << result + ">";
    return 0;
}