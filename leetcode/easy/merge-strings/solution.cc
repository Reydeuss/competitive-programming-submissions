// Submission & solution by Reydeus
// Title: 1768. Merge Strings Alternately
// Original Problem: https://leetcode.com/problems/merge-strings-alternately
// Submission: https://leetcode.com/problems/merge-strings-alternately/submissions/1805879450

class Solution {
  public:
  string mergeAlternately(string word1, string word2) {
    string res;

    int total_len = word1.size() + word2.size();
    res.resize(total_len);

    int l = 0;
    int r = 0;
    int i = 0;
    while (i < total_len) {
      if (l < word1.size()) {
        res[i++] = word1[l++];
      }

      if (r < word2.size()) {
        res[i++] = word2[r++];
      }
    }
    return res;
  }
};
