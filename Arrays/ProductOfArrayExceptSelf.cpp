/*
Day 13 - Product of Array Except Self

Pattern: Prefix & Suffix Product
Idea:
- Left product × Right product
- No division used

Time Complexity: O(n)
Space Complexity: O(1) extra
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);
        int leftpro=1;
        int rightpro=1;
        for (int i=0;i<n;i++){
            ans[i]=leftpro;
            leftpro*=nums[i];
        }
        for(int j=n-1;j>=0;j--){
            ans[j]*=rightpro;
            rightpro*=nums[j];
        }
        return ans;

    }
};