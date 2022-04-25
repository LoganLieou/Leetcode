from typing import List, Optional

class Solution:
    def twoSum(self, nums: List[int], tar: int) -> Optional[List[int]]:
        l, r = 0, len(nums) - 1
        while (l < r):
            if ((nums[l] + nums[r]) == tar):
                return [l + 1, r + 1]
            elif ((nums[l] + nums[r]) > tar):
                r -= 1
            else:
                l += 1
        return None

if __name__ == "__main__":
    s = Solution()
    print(s.twoSum([1, 2, 3, 4, 5], 7))
