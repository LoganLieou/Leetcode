#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// the O(n^2) solution
bool containsDuplicateOne(vector<int> & nums) {
	for (int i = 0; i < nums.size(); i++) {
		for (int j = i + 1; j < nums.size(); j++) {
			if (nums[i] == nums[j]) {
				return true;
			}
		}
	}
	return false;
}

// the O(NlogN) solution
bool containsDuplicateTwo(vector<int> & nums) {
	sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size() - 1; i++) {
		if (nums[i] == nums[i+1]) {
			return true;
		}
	}
	return false;
}

// the O(N) solution
bool containsDuplicateThree(vector<int> & nums) {
	unordered_set<int> s;

	for (int i = 0; i < nums.size(); i++) {
		if (!s.insert(nums[i]).second)
			return true;
	}

	return false;
}

int main() {
	// check if an array contains a duplicate
	vector<int> v = {3, 4, 2, 1, 5};
	cout << containsDuplicateOne(v) << endl;
}
