/*
Day 18 - Min Stack

Topic: Stack (Design)
Theory:
- Normal stack cannot give minimum in O(1)
- Use an extra stack to store minimum so far at each level

Approach:
- Main stack stores values
- Min stack stores min(value, previous min)
- Pop from both stacks together

Time Complexity:
- push, pop, top, getMin: O(1)

Space Complexity:
- O(n)
*/


#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<int> st;
    stack<int> mins;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(mins.empty()){
            mins.push(val);
        }
        else{
            mins.push(min(val,mins.top()));
        }
    }
    
    void pop() {
        st.pop();
        mins.pop();  
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mins.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */