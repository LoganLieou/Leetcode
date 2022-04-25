from typing import List

# TODO review this problem
def maxProduct(nums: List[int]) -> int:
    res = int(-2e32)
    curMin, curMax = 1, 1

    for num in nums:
        temp = curMax * num
        curMax = max(num * curMax, num * curMin, num)
        curMin = min(temp, num * curMin, num)
        res = max(res, curMax)

    return res
