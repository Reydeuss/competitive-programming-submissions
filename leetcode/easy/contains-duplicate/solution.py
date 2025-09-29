# Original Problem Title: Contains Duplicate @Leetcode
# Original Problem Link: https://leetcode.com/problems/contains-duplicate/
# Problem Submission: https://leetcode.com/problems/contains-duplicate/submissions/1433018574
# Code by Reydeuss @ Github

from typing import List # In Leetcode you don't need to import this

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = set()
        for num in nums:
            if num in seen:
                return True
            else:
                seen.add(num)
        return True
