#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    int s, e;
    int result = 0;
    

    cin >> n;
    vector<int> numbers(n);
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
        
    }
    cin >> x;

    sort(numbers.begin(), numbers.end());
    
    s = 0;
    e = n-1;
    while(s < e) {
        if(numbers[s] + numbers[e] > x) {
            e--;
        }
        else if(numbers[s] + numbers[e] < x) {
            s++;
        }
        else {
            result++;
            s++;
        }
    }
    
    cout << result;

    return 0;
}