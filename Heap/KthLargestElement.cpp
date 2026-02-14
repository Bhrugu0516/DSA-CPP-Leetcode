/*
Day 26 - Kth Largest Element in an Array
Topic: Heap / Priority Queue (Min Heap)

Idea:
- Maintain a min heap of size k
- If heap size exceeds k, remove smallest
- Top of heap is kth largest

Time Complexity: O(n log k)
Space Complexity: O(k)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
         priority_queue<int, vector<int>, greater<int>> minHeap;
         for(int n:nums){
            minHeap.push(n);
            if(minHeap.size()>k){
                minHeap.pop();
            }
         }
         return minHeap.top();
    }
};