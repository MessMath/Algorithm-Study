// 방 번호
#include <iostream>
#include <map>
#include <cmath>

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    std::cin >> N;

    std::map<int, int> map;

    while(N > 0) {
        map[N % 10]++;
        N /= 10;
    }

    map[6] = map[9] = std::round((map[6] + map[9]) / 2.0f);

    int max = 0;
    for (int i = 0; i < 10; ++i) {
        if(max < map[i]) max = map[i];
    }

    std::cout << max;

}