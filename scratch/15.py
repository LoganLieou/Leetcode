from typing import List

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        # we want all tuples of 3 integers such that none of them are duplicates
        # and those 3 integers sum to be 0
        solutions = []
        nums.sort()

        # the reason we loop until -2 of the size is because we're summing 3 values
        for i in range(len(nums)-2):
            # i = 0 cannot be a duplicate, otherwise check i and prev for duplicate
            if (i > 0 and (nums[i] == nums[i - 1])):
                continue

            # create left and right pointers
            l, r = i + 1, len(nums) - 1

            # while left and right have not crossed
            while l < r:
                # take the sum
                s = nums[i] + nums[l] + nums[r]
                # if sum is neg, increment left
                if s < 0:
                    l += 1
                # if sum is pos, decrement right
                elif s > 0:
                    r -= 1
                # otherwise it's zero so append the solution onto the results
                else:
                    solutions.append([nums[i], nums[l], nums[r]])

                    # then do this for some reason
                    while l < r and nums[l] == nums[l + 1]:
                        l += 1
                    while l < r and nums[r] == nums[r - 1]:
                        r -= 1
                    l += 1; r -= 1

        return solutions

s = Solution()
print(s.threeSum([1, 2, 3, 4, -5]))
