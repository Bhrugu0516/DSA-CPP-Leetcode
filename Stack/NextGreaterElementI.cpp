/*
Day 17 - Next Greater Element I

Pattern: Monotonic Stack
Idea:
- Stack stores elements waiting for a greater value
- When a bigger number appears, resolve all smaller ones

Time Complexity: O(n)
Space Complexity: O(n)
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int> greaternext;
        stack<int>st;
        for(int num:nums2){
            while(!st.empty() && num>st.top()){
                greaternext[st.top()]=num;
                st.pop();
            }
            st.push(num);
        }
        while(!st.empty()){
            greaternext[st.top()]=-1;
            st.pop();
        }
        vector<int> result;
        for(int num:nums1){
            result.push_back(greaternext[num]);    
        }
        return result;
    }
};