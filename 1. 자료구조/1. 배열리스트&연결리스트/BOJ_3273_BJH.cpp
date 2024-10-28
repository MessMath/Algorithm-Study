#include <iostream>
#include <vector>
#include <algorithm>

int two_pointer(std::vector<int>& nums, int target) {

    int left = 0;
    int right  = nums.size() - 1;

    std::vector<std::pair<int, int>> results;

    while(left < right) {

        int sum = nums[left] + nums[right];

        if (sum == target) {
            results.push_back({left, right});
            left++;
        } else if (sum < target)
            left++;
        else
            right--;
    }

    return results.size();
}

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int size, target;
    std::vector<int> nums;
    // 수열의 크기 입력
    std::cin >> size;
    nums.resize(size);

    // 수열에 포함되는 수 입력
    for (int i = 0; i < size; ++i) {
        std::cin >> nums[i];
    }

    // 입력되는 x
    std::cin >> target;

    // 투포인터를 수행하기 위해 정렬
    std::sort(nums.begin(), nums.end());

    std::cout << two_pointer(nums, target);
}