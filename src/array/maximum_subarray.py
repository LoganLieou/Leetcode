from typing import List

# TODO review
def maxSubArray(nums: List[int]) -> int:
    maxSum = float('-inf'); curSum = 0
    for num in nums:
        curSum += num
        maxSum = max(maxSum, curSum)
        curSum = 0 if curSum < 0 else curSum
    return maxSum

print(maxSubArray([1, 2, -1, 3, 4]))