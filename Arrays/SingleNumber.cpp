/*
Day 11 - Single Number

Pattern: Bit Manipulation (XOR)
Idea:
- Pairs cancel using XOR
- Unique element remains

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
    for(int num:nums){
        ans ^=num;

    }
    return ans;
    }
};