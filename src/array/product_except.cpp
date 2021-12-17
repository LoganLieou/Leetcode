#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> productExceptSelf(vector<int> & nums) {
	// init vectors
	vector<int> lp(nums.size()); 
	vector<int> rp(nums.size()); 
	vector<int> out(nums.size());

	// set left and right ends to be 1 in respective arrays
	lp[nums.size() - 1] = 1;
	rp[0] = 1;

	// construct the left products array
	for (int i = nums.size() - 2; i >= 0; i--) {
		lp[i] = lp[i + 1] * nums[i + 1];
	}

	// constrcut the right product array
	for (int i = 1; i < nums.size(); i++) {
		rp[i] = rp[i - 1] * nums[i - 1];
	}

	// construct output array from product of left and right
	for (int i = 0; i < nums.size(); i++) {
		out[i] = lp[i] * rp[i];
	}

	return out;
}

// output vector
void outVec(vector<int> v) {
	cout << "[ ";
	for (size_t i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << "]" << endl;
}

int main() {
	vector<int> arr = {1, 2, 3, 4};
	outVec(arr);

	vector<int> res = productExceptSelf(arr);
	outVec(res);
}
