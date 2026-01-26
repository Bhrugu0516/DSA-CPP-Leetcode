/*
Pattern: Sliding Window with Frequency Map (At Most K Distinct)

Use Case:
- Longest / shortest substring or subarray
- Constraint based on number of distinct elements (≤ K)

Core Idea:
- Expand window with right pointer
- Track frequencies using unordered_map
- If distinct count > K, shrink window from left
- Window is valid after shrinking

Typical Problems:
- Longest Substring with At Most K Distinct Characters
- Subarrays with At Most K Distinct Integers
- Exactly K Distinct (via atMost(K) - atMost(K-1))

Time Complexity: O(n)
Space Complexity: O(k)
*/

#include<bits/stdc++.h>
using namespace std;

class SlidingWindowAtMostK{
public:
       int solve(string s,int k){
        if(k==0) 
        return 0;
        int left=0;int ans=0;
        unordered_map<char,int> freq;
        for(int right=0;right<s.size();right++){
            freq[s[right]]++;
            while(freq.size()>k){
                freq[s[left]]--;
                if(freq[s[left]]==0){
                    freq.erase(s[left]);
                    
                }
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;

       }
};