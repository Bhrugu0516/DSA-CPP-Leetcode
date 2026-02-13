/*
Day 25 - Find Minimum in Rotated Sorted Array
Topic: Binary Search (Rotated Array)
Time Complexity: O(log n)
Space Complexity: O(1)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
    int low=0,high=nums.size()-1;
    while(low<high){
        int mid=low+(high-low)/2;
        if(nums[mid]>nums[high]){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    return nums[low];
    }
};