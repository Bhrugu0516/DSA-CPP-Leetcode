/*
Day 23 - Capacity To Ship Packages Within D Days
Topic: Binary Search on Answer
Time Complexity: O(n log S)
Space Complexity: O(1)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canship(vector<int>& weights,int cap ,int days){
        int dayCount=1,load=0;
        for(int w:weights){
            if(load+w>cap){
                dayCount++;
                load=0;
            }
            load+=w;
        }
        return dayCount<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
    int low=*max_element(weights.begin(),weights.end());
    int high=accumulate(weights.begin(),weights.end(),0);
    int ans=high;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(canship(weights,mid,days)){
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