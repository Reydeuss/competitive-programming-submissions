// Original Problem Title: Contains Duplicate @Leetcode
// Original Problem Link: https://leetcode.com/problems/contains-duplicate/
// Problem Submission: https://leetcode.com/problems/contains-duplicate/submissions/1433020576
// Code by Reydeuss @ Github

// Additional Imports so compiler recognizes set and vector symbols.
// By default available without imports on Leetcode.
#include <set>
#include <vector>

using namespace std; // Reduce boilerplate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> seen;
        for (const auto i : nums) {
            if (seen.count(i)) {
                return true;
            }
            seen.insert(i);
        }
        return false;
    }
};
