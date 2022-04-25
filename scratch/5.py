class Solution:
    def longestPalindrome(self, s: str) -> str:
        maxLen = float('-inf')
        for i in range(len(s)):
