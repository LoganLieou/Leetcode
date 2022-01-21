#include <bits/stdc++.h>

using namespace std;

int search_prime(vector<int> nums, int target) {
	auto it find(nums.begin(), nums.end(), target);
	return it == nums.end() ? -1 : *it;
}

int search(vector<int> nums, int target) {
	// handle the edge case
	if (nums.empty() or nums.size() == 0) return -1;
	int lo = 0, hi = nums.size() - 1;

	// while lo is less than or equal to hi bc [1] exists
	// as an edge case or smth like that so lo can = hi
	while (lo <= hi) {
		// set the mid using midpoint forumla
		int mid = (lo + hi) / 2;
		// if the value in in the right side of array
		if (nums[mid] >= nums[lo]) {
			if (target > nums[mid] and target < nums[lo]) {
				// search right
				lo = mid + 1;
			}
			else {
				// search left
				hi = mid - 1;
			}
		}
		// if the value is in the left side of the array
		else {
			if (target < nums[mid] and target > nums[hi]) {
				hi = mid - 1;
			}
			else {
				lo = mid + 1;
			}
		}
	}
	return -1;
}

int main() {
	vector<int> nums = {3, 4, 1, 2};
	// how did this happen?
	printf("%d\n", search_prime(nums, 3))
}
