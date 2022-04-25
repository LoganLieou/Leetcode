#include <algorithm>
#include <vector>
#include <iostream>
#include <unordered_map>

vector<vector<int>> threeSum(vector<int> nums) {
	vector<vector<int>> res;
	sort(nums.begin(), nums.end());
	for (int i = 0; i < (int)nums.size()-2; i++) {
		int l = i+1, r = (int)nums.size()-1;
		while (l < r) {
			int s = nums[l] + nums[r] + nums[i];
			if (s < 0) {
				l++;
			}
			else if (s > 0) {
				r--;
			}
			else {
				res.push_back({nums[l], nums[r], nums[i]});
				l++;
				while (nums[l] == nums[l-1] && l < r) l++;
			}
		}
	}
	return res;
}

int main() {
}
