def minWindow(s, t):
    if t == "":
        return ""

    res, res_len = [-1, -1], float('inf')

    countT, window = {}, {}
    l = 0

    for c in t:
        countT[c] = 1 + countT.get(c, 0)

    have, need = 0, len(countT)

    for r in range(len(s)):
        c = s[r]
        window[c] = 1 + window.get(c, 0)

        if c in countT and window[c] == countT[c]:
            have += 1

        while have == need:
            # update the result
            if (r - l + 1) < res_len:
                res = [l, r]
                res_len = r - l + 1

            # shrink from the left
            window[s[l]] -= 1
            if s[l] in countT and window[s[l]] < countT[s[l]]:
                have -= 1
            l += 1

    l, r = res
    return s[l:r+1] if res_len != float('inf') else ""
