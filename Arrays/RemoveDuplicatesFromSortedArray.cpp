/*
Problem: Remove Duplicates from Sorted Array
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
Topic: Arrays / Two Pointers

Approach:
- Since the array is sorted, duplicates are adjacent
- Use two pointers (slow and fast)
- Slow pointer tracks the position of last unique element
- Fast pointer scans the array

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
      int removeDuplicate(vector<int>& nums){
        int slow=0;
        for(int fast=0;fast<nums.size();fast++){
            if(nums[fast]!=nums[slow]){
                slow++;
                nums[slow]=nums[fast];
            }
        }
        return slow+1;
      }
};