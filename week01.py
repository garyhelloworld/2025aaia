
# week04-1.py
 二合一 python 版本
# LeetCode maximum-count-of-positive-integer-and-negative-integer
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos = 0
        neg = 0
        for i in range(len(nums)):
            if nums[i] > 0: pos += 1
            if nums[i] < 0: neg += 1
        return max(pos, neg)
