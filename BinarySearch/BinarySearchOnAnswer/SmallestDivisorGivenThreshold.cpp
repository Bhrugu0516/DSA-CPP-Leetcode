/*
Day 24 - Find the Smallest Divisor Given a Threshold
Topic: Binary Search (Binary Search on Answer)

Idea:
- Binary search on divisor d
- Check feasibility using sum of ceil(nums[i] / d)

Time Complexity: O(n log m)
Space Complexity: O(1)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isDivisor(vector<int>& nums,int div,int threshold){
    long long sum=0;
    for(int n :nums){
    sum+=(n+div-1)/div;
    }
    return sum <= threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
    int low=1,high=*max_element(nums.begin(),nums.end());
    int ans=high;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(isDivisor(nums,mid,threshold)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
    }
};
