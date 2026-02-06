/*
Day 19 - Daily Temperatures

Topic: Monotonic Stack
Approach:
- Stack stores indices of days with decreasing temperatures
- When a warmer day appears, resolve waiting indices
- Answer is distance between indices

Time Complexity: O(n)
Space Complexity: O(n)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
    vector<int> ans(n,0);
    stack<int> st;

    for(int i=0;i<n;i++){
        while(!st.empty() && temperatures[i] > temperatures[st.top()]){
            int idx=st.top();
            st.pop();
            ans[idx]=i-idx;
        }
        st.push(i);
    }
    return ans;
    }
};