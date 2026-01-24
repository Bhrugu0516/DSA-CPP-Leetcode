/*
Pattern: Sliding Window (Two Pointers + Hashing)
Use Case:
- Longest / shortest substring or subarray
- Condition based on uniqueness or frequency

Core Idea:
- Expand window using right pointer
- Maintain window state using hashing
- Shrink window using left pointer when condition breaks

Typical Problems:
- Longest Substring Without Repeating Characters
- Longest Substring with K Distinct Characters
- Minimum Window Substring

Time Complexity: O(n)
Space Complexity: O(k) where k is window size
*/

#include<bits/stdc++.h>
using namespace std;

class SlidingWindowUnique{
public:
       int longestUniqueSubstring(string s){
        unordered_set<char> st;
        int left=0;int maxlen=0;
        for(int right=0;right<s.size();right++){
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
       }
};