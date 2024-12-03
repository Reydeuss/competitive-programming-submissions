# Original Problem Title: Remove Element @ Leetcode
# Original Problem Link: https://leetcode.com/problems/remove-element

from typing import List # You don't need this in Leetcode

class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        unequal_nums = 0
        length = len(nums)
        i = 0
        while i < length:
            if nums[i] == val:
                unequal_nums += 1
                nums.pop(i)
                length -= 1
            else:
                i += 1
        return length
