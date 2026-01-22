/*
Problem: Valid Anagram
Link: https://leetcode.com/problems/valid-anagram/
Topic: Hashing / Strings

Approach:
- Since input consists of lowercase English letters only, use a fixed-size array of size 26
- Increment frequency for characters in the first string
- Decrement frequency for characters in the second string
- If any frequency is non-zero at the end, strings are not anagrams

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
        bool ValidAnaArr(string s,string t){
    if(s.length()!=t.length()){
        return false;
    }
    int freq[26]={0};
    for(char c:s){
        freq[c-'a']++;
    }
    for(char c:t){
        freq[c-'a']--;
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}
};