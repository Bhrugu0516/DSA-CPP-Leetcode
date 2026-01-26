/*
Pattern: Sliding Window — Exactly K Distinct (Subtraction Trick)

Idea:
- Sliding window works for "at most K", not "exactly K"
- Exactly K = atMost(K) - atMost(K-1)

Used In:
- Subarrays with K Different Integers
- Substrings with Exactly K Distinct Characters

Key Insight:
- Validity for exactly K is non-monotonic
- Use two monotonic counts and subtract

Time Complexity: O(n)
Space Complexity: O(k)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostK(nums,k) - atMostK(nums,k-1);
    }
    int atMostK(vector<int>& nums,int k){
        unordered_map<int,int> freq;
    int left=0;int count=0;

    for(int right=0;right<nums.size();right++){
        freq[nums[right]]++;
        while(freq.size()>k){
            freq[nums[left]]--;
            if(freq[nums[left]]==0){
                freq.erase(nums[left]);
        
            }
            left++;     
        }
        count+=right-left+1;

    }
    return count;
    }
    
};