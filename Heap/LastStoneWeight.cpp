/*
Day 27 - Last Stone Weight
Topic: Heap / Priority Queue (Max Heap)

Idea:
- Use max heap to always get the two largest stones
- Smash them and push back the difference if not equal

Time Complexity: O(n log n)
Space Complexity: O(n)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;

        for (int stone : stones) {
            maxHeap.push(stone);
        }

        while (maxHeap.size() > 1) {
            int first = maxHeap.top();
            maxHeap.pop();

            int second = maxHeap.top();
            maxHeap.pop();

            if (first != second) {
                maxHeap.push(first - second);
            }
        }

        return maxHeap.empty() ? 0 : maxHeap.top();
    }
};
