/*
Problem: Squares of a Sorted Array
Link: https://leetcode.com/problems/squares-of-a-sorted-array/
Topic: Arrays / Two Pointers

Approach:
- Use two pointers at the beginning and end of the array
- Compare squares of elements at both ends
- Place the larger square at the end of the result array
- Move pointers inward

Time Complexity: O(n)
Space Complexity: O(n)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
       vector<int> sortedSquare(vector<int>& nums){
        int n=nums.size();
        vector<int> res(n);
        int left=0;
        int right=n-1;
        int idx=n-1;
        while(left<=right){
            if(nums[left]*nums[left]>nums[right]*nums[right]){
                res[idx--]=nums[left]*nums[left];
                left++;
            }
            else{
                res[idx--]=nums[right]*nums[right];
                right--;
            }
        }
        return res;
       }
};