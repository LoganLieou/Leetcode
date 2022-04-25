#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int rob_houses(const vector<int>& nums) {
    // edge case
    if ((int)nums.size() == 1) return nums[0];
    auto helper = [&](vector<int>& houses) -> int {
        int rob1 = 0, rob2 = 0;
        for (int h : houses) {
            int temp = max(h + rob1, rob2);
            rob1 = rob2;
            rob2 = temp;
        }
        return rob2;
    };

    vector<int> t1(nums.begin()+1, nums.end());
    vector<int> t2(nums.begin(), nums.end()-1);

    return max(helper(t1), helper(t2));
}

int main() {
    // 3
    cout << rob_houses({2, 3, 2}) << endl;
}
