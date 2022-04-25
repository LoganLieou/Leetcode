def lengthOfLIS(nums):
    dp = [1] * len(nums)
    for i in range(len(nums)-1, -1, -1):
        for j in range(i+1, len(nums)):
            if (nums[j] > nums[i]):
                dp[i] = max(dp[i], 1 + dp[j])
    return max(dp)

print(lengthOfLIS([1,2,4,3])) # 3

"""
longest increacing subsequence
the longest increacing subsequence at
any given index is 1 because itself
would be a part of the increasing subsequence
worst case scenario there's no way to
"""
