/*
Day 15 - Isomorphic Strings

Pattern: Hashing / One-to-One Mapping
Idea:
- Use two maps to enforce bijection (s->t and t->s)

Time Complexity: O(n)
Space Complexity: O(n)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
    unordered_map<char,char> ss;
    unordered_map<char,char> tt;
    for(int i=0;i<s.size();i++){
        char c1=s[i];
        char c2=t[i];
        if(ss.count(c1) && ss[c1]!=c2){
            return false;
        }
        if(tt.count(c2) && tt[c2]!=c1){
            return false;
        }
        ss[c1]=c2;
        tt[c2]=c1;
    }
    return true;
    }
};