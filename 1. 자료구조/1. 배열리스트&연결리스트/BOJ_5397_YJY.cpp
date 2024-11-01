#include <iostream>
#include <list>

using namespace std;

void FindPassword(string input)
{
    list<char> password;
    auto cursor = password.begin();

    for (char c : input) {
        if (c == '<') {
            if (cursor != password.begin()) {
                cursor--;
            }
        } 
        else if (c == '>') {
            if (cursor != password.end()) {
                cursor++;
            }
        } 
        else if (c == '-') {
            if (cursor != password.begin()) {
                cursor = password.erase(--cursor);
            }
        } 
        else {
            password.insert(cursor, c);
        }
    }

    for (char c : password) {
        cout << c;
    }
    cout << '\n';  // 개행 처리
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    string input;

    cin >> tc;

    for (int i = 0; i < tc; i++) {
        cin >> input;
        FindPassword(input);
    }
    return 0;
}