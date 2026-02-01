/*
Day 13 - Subarray Sum Equals K

Pattern: Prefix Sum + HashMap
Idea:
- currentSum - k identifies required previous prefix
- Count all valid prefix pairs

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefixcount;
        prefixcount[0]=1;
        int currsum=0;
        int count=0;
        for(int x:nums){
            currsum+=x;
            if(prefixcount.count(currsum-k)){
                count+=prefixcount[currsum-k];
            }
            prefixcount[currsum]++;
        }
        return count;
    }
};