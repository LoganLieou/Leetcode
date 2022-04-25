def characterReplacement(s, k):
    """
    You can replace k characters in s
    """
    m = {}
    res = 0
    l = 0
    for r in range(len(s)):
        m[s[r]] = 1 + m.get(s[r], 0)
        while (r - l + 1) - max(count.values()) > k:
            m[s[l]] -= 1
            l += 1
        res = max(res, r - l + 1)
    return res
