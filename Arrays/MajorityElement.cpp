/*
Day 11 - Majority Element

Pattern: Frequency / Dominance
Idea:
- Count frequency of each element
- Element with count > n/2 is the answer

Time Complexity: O(n)
Space Complexity: O(n)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n=nums.size();
        for(int i:nums){
            freq[i]++;
        }
        for(auto&p:freq){
            if(p.second>n/2){
                return p.first;
            }
        }
        return -1;
    }
};