#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int wordBreak(string s, vector<string> wordDict) {
	int n = (int)s.size();
	vector<bool> dp(n+1, false);
	dp[n] = true;
	for (int i = n - 1; i >= 0; i--) {
		for (string w : wordDict) {
			if ((i + w.size()) <= n && s.substr(i, w.size()) == w) {
				dp[i] = dp[i + w.size()];
			}
			if (dp[i]) {
				break;
			}
		}
	}
	return dp[0];
}

int main() {
}
