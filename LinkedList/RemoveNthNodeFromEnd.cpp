/*
Day 30 - Remove Nth Node From End of List
Topic: Linked List (Two Pointer Gap + Dummy Node)

Idea:
- Use dummy node to handle head removal
- Move fast pointer n steps ahead
- Move both pointers until fast reaches last node
- Remove slow->next

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.**/
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy=new ListNode(0);
    dummy->next=head;
    ListNode* slow=dummy;
    ListNode* fast=dummy;
    for(int i=0;i<n;i++){
        fast=fast->next;
    }
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=slow->next->next;
    return dummy->next;
    }
};