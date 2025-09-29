// Submission & solution by Reydeus
// Title: Binary Search
// Original Problem: https://leetcode.com/problems/binary-search/
// Submission: https://leetcode.com/problems/binary-search/submissions/1786064996

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            int num = nums[mid];

            if (num == target) {
                return mid;
            } else if (target < num) {
                r = mid - 1;
            } else if (target > num) {
                l = mid + 1;
            }
        }

        return -1;
    }
};
