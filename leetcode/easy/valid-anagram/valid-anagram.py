# Code & Solution by Reydeuss @ Github
# Problem description: Determine if string s and string t is an anagram of each other
# Original Problem Link: https://leetcode.com/problems/valid-anagram/
# Submission Link: https://leetcode.com/problems/valid-anagram/submissions/1433366199

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        seen = dict()
        for char in s:
            if char not in seen:
                seen[char] = 1
                continue
            seen[char] += 1
        
        for char in t:
            if char not in seen:
                return False
            elif seen[char] == 0:
                return False
            seen[char] -= 1
        
        for _, times in seen.items():
            if times != 0:
                return False

        return True
