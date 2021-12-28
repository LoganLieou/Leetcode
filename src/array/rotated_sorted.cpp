#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

// linear search approach
int badFindMin(vector<int>& nums) {
		int min = INT_MAX;
		for (int n : nums) {
				if (n < min) {
						min = n;
				}
		}
		return min;
}

int findMin(vector<int>& nums) {
	// min will not always be on right side of the array
	int hi = nums.size() - 1;
	int lo = hi / 2;
	int min = nums[lo];

	// modified binary search
	while (hi <= lo) {
		int mid = (lo + hi) / 2;
		// keep checking right side of the array
		if (mid ... // smth)
	}

	return min;
}

int main() {
	vector<int> v = {1, 2, 3};
	if (v.front() == 1) {
		cout << "1" << endl;
	}
	else {
		cout << "bugged" << endl;
	}
}
