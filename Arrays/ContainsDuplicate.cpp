/*
Problem: Contains Duplicate
Link: https://leetcode.com/problems/contains-duplicate/
Topic: Arrays

Approach:
- Use nested loops
- Compare every pair

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
        bool ContainsDup(vector<int>& nums){
            int n=nums.size();
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if (nums[i]==nums[j]){
                        return true;
                    }
                }
            }
            return false;
        }
};