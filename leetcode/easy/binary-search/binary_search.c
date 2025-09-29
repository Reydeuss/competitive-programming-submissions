// Original Problem Title: Binary Search @Leetcode
// Original Problem Link: https://leetcode.com/problems/binary-search/
// Code & Solution by Reydeuss @ Github

int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    int mid, num;

    while(left <= right) {
        mid = (left + right) / 2;
        num = nums[mid];
        printf("%d %d\n", mid, num);
        if (num == target) {
            return mid;
        } else if (target < num) {
            right = mid - 1;
        } else if (target > num) {
            left = mid + 1;
        }
    }

    return -1;
}
