class Solution:
    def climbingStairs(self, n: int) -> int:
        # edge  case
        if (n <= 2): return n
        # keep track of two previous values
        a, b = 1, 2
        # for i in range ...
        for i in range(n - 2):
            a, b = b, a + b
        return b

if __name__ == "__main__":
    s = Solution()
    print(s.climbingStairs(13))
