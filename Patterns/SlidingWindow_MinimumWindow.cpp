/*
Pattern: Sliding Window — Minimum Window Substring

Use Case:
- Find the smallest substring that satisfies frequency requirements

Key Idea:
- Maintain frequency of required characters (need)
- Maintain frequency in current window (window)
- 'formed' tracks how many requirements are satisfied
- When formed == required, window is valid
- Shrink from left to minimize the window

Typical Problems:
- Minimum Window Substring
- Smallest substring containing all characters
- Minimum covering substring

Time Complexity: O(n)
Space Complexity: O(|t|)
*/

#include<bits/stdc++.h>
using namespace std;

class SlidingWindowMinimum{
public:
       string Solve(string s,string t){
        unordered_map<char,int> need;

        for(char c:t){
            need[c]++;
        }

        unordered_map<char,int> window;
        int left=0;int formed=0;
        int minLen = INT_MAX, start = 0;
        int required=need.size();

        for(int right=0; right<s.size();right++ ){
            char c=s[right];
            window[c]++;
            if(need.count(c) && window[c]==need[c]){
                formed++;
            }
            while(formed==required){
                if(right-left+1<minLen){
                    minLen=right-left+1;
                    start=left;
                }
                char d=s[left];
                window[d]--;
                 if (need.count(d) && window[d] < need[d])
                    formed--;
                left++;
            }
            

        }
        return minLen==INT_MAX ? "":s.substr(start,minLen);
       }
};