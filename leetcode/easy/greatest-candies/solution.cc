// Submission & solution by Reydeuss
// Title: 1431. Kids With the Greatest Number of Candies
// Original Problem: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies
// Submission: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/submissions/1805888792

class Solution {
  public:
  vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int largest = *max_element(begin(candies), end(candies));
    vector<bool> result(candies.size());
    for (int i = 0; i < candies.size(); i++) {
      result[i] = (candies[i] + extraCandies >= largest);
    }

    return result;
  }
};
