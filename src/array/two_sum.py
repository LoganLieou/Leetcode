from typing import Optional, List

# O(nm) for each element in the array we do m steps where m is n - i
# O(n^2) m is approximately n when n is large
def twoSum(nums: List[int], target: int) -> Optional[List[int]]:
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if (nums[i] + nums[j]) == target:
                return [i, j]
    return None

# O(n) time where n is the size of the array
def twoSumPrime(nums: List[int], target: int) -> Optional[List[int]]:
    m = {}
    for i in range(len(nums)):
        if (target - nums[i]) in m:
            return [i, m[target]]
        else:
            m[nums[i]] = i

    return None

