#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int lengthOfLongestSubstring(string s) {
	int maxLength = 0;
	vector<char> st;
	for (int i = 0; i < s.size(); i++) {
		if (st.size() == 0 || st.front() == s[i]) st.push_back(s[i]);
		else st.clear();
		maxLength = max(maxLength, static_cast<int>(st.size()));
	}
	return maxLength;
}

int main() {
	cout << lengthOfLongestSubstring("aaabbaaba") << endl;
}
