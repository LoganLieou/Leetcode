def findLongest(s: str) -> int:
    st = set()
    l, res = 0, 0
    for r in range(len(s)):
        while s[r] in st:
            st.remove(s[l])
            l += 1
        st.add(s[r])
        res = max(res, r - l + 1)
    return res

print(findLongest("bbbbbb")) # 1
print(findLongest("abcabcbb")) # 3
