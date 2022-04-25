def isPalindrome(s):
    if s == "":
        return False
    temp = ""
    for i in range(len(s)-1, -1, -1):
        temp += s[i]
    return temp == s

print(isPalindrome("racecar"))
