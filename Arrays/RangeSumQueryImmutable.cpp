/*
Day 12 - Range Sum Query (Immutable)

Pattern: Prefix Sum / Precomputation
Idea:
- Build prefix sum array once
- Answer each range query in O(1)

Time Complexity: O(n) preprocessing, O(1) per query
Space Complexity: O(n)
*/
#include<bits/stdc++.h>
using namespace std;

class NumArray {
    vector<int> prefix;
public:
    NumArray(vector<int>& nums) {
        prefix.resize(nums.size());
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i]+=prefix[i-1]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return prefix[right];
        }
        return prefix[right]-prefix[left-1];
    }
};
