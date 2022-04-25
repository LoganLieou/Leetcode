#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int lengthOfLIS(vector<int> nums) {
	int n = (int)nums.size();
	vector<int> res(n, 1);
	for (int i = n - 1; i >= 0; i--) {
		for (int j = i + 1; j < n; j++) {
			if (nums[j] > nums[i]) {
				res[i] = max(res[i], res[j] + 1);
			}
		}
	}
	return *max_element(res.begin(), res.end());
}

int main() {
	cout << lengthOfLIS({1, 2, 4, 3}) << endl; // 3
}
