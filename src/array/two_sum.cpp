#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

template<typename T>
void output(vector<T> vec) {
	cout << "[ ";
	for (T a : vec) {
		cout << a << " ";
	}
	cout << "]" << endl;
}

vector<int> two_sum_one(vector<int> & nums, int target) {
	for (int i = 0; i < nums.size(); i++) {
		for (int j = 1; j < nums.size(); j++) {
			if (target == (nums[i] + nums[j])) {
				return {i, j};
			}
		}
	}
	return {};
}

vector<int> two_sum_two(vector<int> & nums, int target) {
	unordered_map<int, int> m;
	vector<int> res;
	for (int i = 0; i < nums.size(); i++) {
		if ((m.find(target - nums[i])) == m.end()) {
			m[nums[i]] = i;
		}
		else {
			res.push_back(m[target - nums[i]]);
			res.push_back(i);
		}
	}
	return res;
}

int main() {
	vector<int> arr = {1, 2, 3};
	int tar = 3;

	vector<int> sol_one = two_sum_one(arr, tar);
	vector<int> sol_two = two_sum_two(arr, tar);

	output(sol_one);
	output(sol_two);
}
