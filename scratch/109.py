class Solution:
    def reverseBits(self, n: int) -> int:
        # not correct solution
        s = '{:032b}'.format(n)
        s = s[::-1]
        return int(s, 2)

test = Solution()
print(test.reverseBits(10100101000001111010011100))
