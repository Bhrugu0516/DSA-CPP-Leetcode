/*
Day 14 - Longest Consecutive Sequence

Pattern: HashSet
Idea:
- Start only from sequence beginnings
- Grow forward while consecutive elements exist

Time Complexity: O(n)
Space Complexity: O(n)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;

        for (int x : st) {
            if (!st.count(x - 1)) {
                int curr = x;
                int length = 1;

                while (st.count(curr + 1)) {
                    curr++;
                    length++;
                }

                longest = max(longest, length);
            }
        }
        return longest;
    }
};
