from typing import List

def productExceptSelf(nums: List[int]) -> List[int]:
    lp = [1] * len(nums)
    rp = [1] * len(nums)

    for i in range(1, len(nums)):
        lp[i] = lp[i - 1] * nums[i - 1]

    for i in range(len(nums) - 2, -1, -1):
        rp[i] = rp[i + 1] * nums[i + 1]

    res = []
    for i in range(len(nums)):
        res.append(lp[i] * rp[i])

    return res

print(productExceptSelf([1, 2, 3, 4]))