# Code by Reydeuss @ Github
# Problem: Two Sum
# Submission: https://leetcode.com/problems/two-sum/submissions/1432512307

from typing import List # This is available by default in Leetcode

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        complements = dict()
        for index, num in enumerate(nums):
            complement = target - num
            if complement in complements:
                return [complements[complement], index]
            complements[num] = index
