#include <iostream>
#include <map>

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int result = 1;

    std::map<int, int> map;

    for (int i = 0; i < 3; ++i) {
        int n;
        std::cin >> n;
        result *= n;
    }

    while(result > 0)
    {
        int num = result % 10;

        map[num] += 1;

        result /= 10;
    }

    for (int i = 0; i < 10; ++i) {
        std::cout << map[i] << '\n';
    }
}