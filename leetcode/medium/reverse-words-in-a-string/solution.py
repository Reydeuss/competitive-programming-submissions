# Submission & solution by Reydeus
# Title: 151. Reverse Words in a String
# Original Problem: https://leetcode.com/problems/reverse-words-in-a-string/
# Submission: https://leetcode.com/problems/reverse-words-in-a-string/submissions/1561077132

class Solution:
    def reverseWords(self, s: str) -> str:
        return ' '.join(list(reversed(s.split())))
