/*
Day 12 - Find Pivot Index

Pattern: Prefix Sum / Balance Index
Idea:
- Left sum and right sum comparison
- rightSum = totalSum - leftSum - currentElement

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        int leftsum=0;
        int rightsum=0;
    for(int x:nums){
        total+=x;
    }
    for(int x=0;x<nums.size();x++){
        
        rightsum=total-leftsum-nums[x];
        if(rightsum==leftsum){
            return x;
        }
        leftsum+=nums[x];
    }
    return -1;
    }
};