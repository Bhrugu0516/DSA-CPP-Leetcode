/*
Problem: Valid Anagram
Link: https://leetcode.com/problems/valid-anagram/
Topic: Hashing / Strings

Approach:
- Check if both strings have the same length
- Use an unordered_map to store frequency of characters from the first string
- Decrease frequency using characters from the second string
- If any character count becomes zero before matching, return false

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
      bool Anagram(string s,string t){
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> freq;

        for(char c:s){
            freq[c]++;

        }
        for(char c:t){
            if(freq[c]==0){
                return false;
            }
            freq[c]--;
        }
        return true;
      }
};