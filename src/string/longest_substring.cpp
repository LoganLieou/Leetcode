#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

/*
 * Questions:
 * what do the mappings represent?
 * why j = max(j, m[s[i]] + 1)
 * where does the maxLength come from?
 *
 */

int lengthOfLongestSubstring(string s) {
		if (s.length() == 0) return 0; // edge case if the string is empty then return 0
		unordered_map<char, int> m; // create a hash map
		int maxLength = 0; // init the max length
		for (int i = 0, j = 0; i < s.length(); i++) { // iterate through the string
				if (m.find(s[i]) != m.end()) { // if char in map
					//?
					j = max(j, m[s[i]] + 1); // set the max value to be the max of the cur max and the length of char at that index
				}
				m[s[i]] = i; // otherwise add the character to the array assoc with it's index
				// ?
				maxLength = max(maxLength, i - j + 1); // max length is equal to the distance between i - j + 1 or curMaxLength
		}
		return maxLength; // return the value we calculated for the max length
}

int main() {
}
