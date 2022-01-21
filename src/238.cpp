#include <bits/stdc++.h>
#define N size
#define vi vector<int>

using namespace std;

// print function for vectors
void print(vi v) { for (int x : v) cout << x << " "; }

vi productExceptSelf(const vi& nums) {
	vi lpr(nums.N(), 1), rpr(nums.N(), 1), res(nums.N(), 1);
	for (int i = 1; i < nums.N(); i++) lpr[i] = lpr[i - 1] * nums[i - 1];
	for (int i = nums.N() - 2; i >= 0; i--) rpr[i] = rpr[i + 1] * nums[i + 1];
	for (int i = 0; i < nums.N(); i++) res[i] = rpr[i] * lpr[i];
	return res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cin.sync_with_stdio(0);

	int t; cin >> t;

	while(t--) {
		int n; cin >> n;
		vi nums(n); for (int i = 0; i < n; i++) cin >> nums[i];
		vi res = productExceptSelf(nums);
		print(res);
	}
}

