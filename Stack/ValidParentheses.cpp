/*
Day 16 - Valid Parentheses

Topic: Stack (LIFO)
Idea:
- Push opening brackets
- On closing bracket, match with stack top
- Stack must be empty at the end

Time Complexity: O(n)
Space Complexity: O(n)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
    stack<char> st;
    for(char c:s){
        if(c=='(' || c=='[' || c=='{'){
            st.push(c);
        }
        else{
            if(st.empty()) return false;
            char top=st.top();
            st.pop();
            if((c=='}' && top!='{') || (c==')' && top!='(') || (c==']' && top!='[')){
                return false;
            }
        }
    }
    return st.empty();
    }
};