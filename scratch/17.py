from typing import List

def dfs(m, digits, path, ret):
    if not digits:
        ret.append(path)
        return
    for c in m[digits[0]]:
        dfs(m, digits[1:], path+c, ret)

def letterCombo(digits: str) -> List[str]:
    if not digits:
        return []
    ret = []
    m = {'2': 'abc', '3': 'def', '4': 'ghj', '5': 'klm', '6': 'nop', '7': 'qrs', '8': 'tuv', '9': 'wxyz'}
    dfs(m, digits, "", ret)
    return ret

print(letterCombo("123"))
