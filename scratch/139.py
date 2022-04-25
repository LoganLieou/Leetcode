from typing import List

class Solution:
    def wordBreakBruteForce(self, s: str, wordDict: List[str]) -> bool:
        """
        Brute Force Solution
        O(n^2)
        """

        temp = ""
        for i in range(len(s)):
            for j in range(i, len(s)):
                if (s[i:j+1] in wordDict):
                    temp += s[i:j+1]
        return temp == s

    def wordBreakScuffed(self, s: str, wordDict: List[str]) -> bool:
        temp = ""
        for word in wordDict:
            for i in range(len(s)):
                if s[i:len(word)] in wordDict:
                    temp += s[i:len(word)]
        return temp == s

s = Solution()
print(s.wordBreakBruteForce("applepenappl", ["apple", "pen"]))
