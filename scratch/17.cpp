#include <bits/stdc++.h>
#define PB push_back
#define S string
#define VS vector<S>

using namespace std;

void p(VS s) { for (S c : s) { printf("%s\n", c); } }

VS letterCombonations(S digits) {
	if (digits == "") return {};
	VS mappings{"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	for (auto digit : digits) {
		VS extendCombonation;
		for (auto& cc : ans) {
			for (auto nc : mappings[digit - '2']) {
				extendCombonation.PB(cc + nc);
			}
		}
		swap(ans, extendCombonation);
	}
	return ans;
}

int main() {
	p(letterCombonations("123"));
}
