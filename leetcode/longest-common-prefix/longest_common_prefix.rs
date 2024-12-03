// Code & Solution by Reydeuss @ Github
// Original Problem Title: Longest Common Prefix
// Original Problem Link: https://leetcode.com/problems/longest-common-prefix/

use std::cmp;

impl Solution { // Solution struct is defined by Leetcode platform
    pub fn longest_common_prefix(strs: Vec<String>) -> String {
        let mut longest: String = String::new();
        let min_length = strs.iter()
            .map(|s| s.len())
            .min()
            .unwrap_or(0);

        for i in 0..min_length {
            let c: char = strs[0].chars().nth(i).unwrap();
            for str in &strs {
                if str.chars().nth(i).unwrap() != c || str == "" {
                    return longest;
                }
            }
            longest.push(c);
        }
        return longest;
    }
}
