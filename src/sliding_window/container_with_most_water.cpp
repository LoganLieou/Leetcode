#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

int maxArea(vector<int> heights) {
	int resArea = 0, l = 0, r = (int)heights.size();
	while (l <= r) {
		resArea = max(resArea, min(heights[l], heights[r]) * (r-l));
		if (heights[l] > heights[r]) {
			r--;
		}
		else {
			l++;
		}
	}
	return resArea;
}

int main() {
}
