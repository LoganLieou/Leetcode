#include <bits/stdc++.h>
#define N size

using namespace std;

int solution(vector<int> heights) {
	int l = 0, r = heights.N() - 1, res = 0;
	while (l < r) {
		int curArea = min(heights[l], heights[r]) * (r - l);
		res = max(curArea, res);
		if (heights[l] < heights[r]) l++;
		else r--;
	}
	return res;
}

int main() {
	vector<int> heights = {1,8,6,2,5,4,8,3,7};
	cout << solution(heights) << endl;
}
