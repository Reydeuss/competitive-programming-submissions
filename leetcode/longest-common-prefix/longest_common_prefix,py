# Code & Solution by Reydeuss @ Github
# Original Problem Title: Longest Common Prefix
# Original Problem Link: https://leetcode.com/problems/longest-common-prefix/

from typing import List # You don't need to import this in Leetcode

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        longest = ""
        min_length = min(len(str) for str in strs)
        for i in range(min_length):
            c = strs[0][i]
            for str in strs:
                if str[i] != c or str == "":
                    return longest
            longest += c
        return longest
