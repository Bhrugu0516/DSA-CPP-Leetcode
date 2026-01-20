/*
Problem: Contains Duplicate
Link: https://leetcode.com/problems/contains-duplicate/
Topic: Arrays / Hashing

Approach:
- Use an unordered_set to store elements seen so far
- Traverse the array once
- If an element already exists in the set, a duplicate is found

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
        bool ContainsDup(vector<int>& nums){
            unordered_set<int> st;
            for(int x:nums){
                if(st.count(x)){
                    return true;
                }
                st.insert(x);
            }
            return false;
        }
};