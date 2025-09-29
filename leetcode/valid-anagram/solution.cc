// Submission & solution by Reydeus
// Title: Valid Anagram
// Original Problem: https://leetcode.com/problems/valid-anagram/
// Submission: https://leetcode.com/problems/valid-anagram/submissions/1786094599

class Solution {
  public:
      bool isAnagram(string s, string t) {
          map<char, int> seen;
          for (const auto c : s) {
              seen[c]++;
          }

          for (const auto c : t) {
              seen[c]--;
          }

          for (const auto& [c, num] : seen) {
              if (num != 0) {
                  return false;
              }
          }

          return true;
      }
  };
