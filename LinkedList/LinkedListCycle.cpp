/*
Day 29 - Linked List Cycle
Topic: Linked List (Fast & Slow Pointer)

Idea:
- Use Floyd’s cycle detection
- Slow moves 1 step, fast moves 2 steps
- If they meet, cycle exists

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include<bits/stdc++.h>
using namespace std;

/**
 Definition for singly-linked list. **/
 struct ListNode {
     int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return false;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false; 
    }
};