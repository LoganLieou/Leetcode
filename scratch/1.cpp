#include <bits/stdc++.h>
#define ll long long 
#define N size

using namespace std;

template<typename T>
void solve(vector<T> nums, T tar) {
	unordered_map<T, int> m
	for (int i = 0; i < nums.N(); i++) {
		T comp = tar - nums[i];
		if (m.find(comp) != m.end()) { cout << m[comp] << " " << i << endl; return; }
		m[nums[i]] = i;
	}
	cout << "NOT FOUND" << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cin.sync_with_stdio(0);

	int t; cin >> t;
	while (t--) {
		int n, t; cin >> n >> t;
		vector<ll> arr(n);
		for (int i = 0; i < n; i++) cin >> arr[i];
		solve(arr, t);
	}
}
