def longestSubstr(s):
    l, r = 0, len(s)-1
    def helper(s):
        return s == s[::-1]

    # shrink the window when
    # we get the max size window
    # that is also a paindrome
    # return the palindrome
    while l < r:
        temp = s[l:r+1]
        if helper(temp):
            return temp
    return ""

