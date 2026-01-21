/*
Problem: Maximum Subarray
Link: https://leetcode.com/problems/maximum-subarray/
Topic: Arrays

Approach:
- Use Kadane’s Algorithm
- Maintain current subarray sum and maximum sum
- Reset current sum when it becomes smaller than current element

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
       int MaximumSub(vector<int>& nums){
        int maxSum=nums[0];
        int currSum=nums[0];
        for(int i=1;i<nums.size();i++){
            currSum=max(currSum+nums[i],nums[i]);
            maxSum=max(maxSum,currSum);

        }
        return maxSum;
       }
};