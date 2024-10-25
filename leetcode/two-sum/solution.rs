// Code by Reydeuss @ Github
// Problem: Two Sum
// Submission: https://leetcode.com/problems/two-sum/submissions/1433239244

use std::collections::HashMap;

impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut complements_seen = HashMap::new();
        for (index, num) in nums.iter().enumerate() {
            let complement = target - num;
            if let Some(&complement_index) = complements_seen.get(&complement) {
                return vec![complement_index, index as i32];
            } else {
                complements_seen.insert(num, index as i32);
            }
        }
        vec![]
    }
}
