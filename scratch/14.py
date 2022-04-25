def longestCommonPrefix(strs):
    temp = ""
    for string in strs:
        for c in string:
            if c not in temp: temp += c
    return temp
