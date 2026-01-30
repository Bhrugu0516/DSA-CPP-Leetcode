/*
Day 12 - Intersection of Two Arrays II

Pattern: Hashing / Frequency Count
Idea:
- Count elements of first array
- Traverse second array and decrement counts

Time Complexity: O(n + m)
Space Complexity: O(n)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> freq;
        vector<int> ans;
        for(int x:nums1){
            freq[x]++;
        }
        for(int y:nums2){
            if(freq[y]>0){
                ans.push_back(y);
                freq[y]--;

            }
        }
        return ans;
    }
};